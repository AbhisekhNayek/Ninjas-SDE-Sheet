#include <bits/stdc++.h> 

class Disjoint{

    public:

    vector<int>parent,size;

    Disjoint(int n){

        size.resize(n+1);

        parent.resize(n+1);

        for(int i=0;i<=n;i++){

            parent[i]=i;

            size[i]=1;

        }

    }

    int findUpar(int node){

        if(node == parent[node]){

            return node;

        }

        return parent[node]=findUpar(parent[node]);

    }

    void unionBySize(int u, int v){

        int ulp_u=findUpar(u);

        int ulp_v=findUpar(v);

        if(ulp_u == ulp_v){

            return;

        }

        if(size[ulp_u] < size[ulp_v]){

            parent[ulp_u]=ulp_v;

            size[ulp_v]+=size[ulp_u];

        }

        else{

            parent[ulp_v]=ulp_u;

            size[ulp_u]+=size[ulp_v];

        }

    }

};

 

int maximumIslandSize(vector<vector<int>> &grid){

    // Write your code here

    int n=grid.size();

        Disjoint ds(n*n);

        

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(grid[i][j] == 1){

            int dr[]={-1,0,1,0};

            int dc[]={0,1,0,-1};

            for(int k=0;k<4;k++){

                int nrow=i+dr[k];

                int ncol=j+dc[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && grid[nrow][ncol] == 1){

                    int nodeno=i*n+j;

                    int adjno=nrow*n+ncol;

                    ds.unionBySize(nodeno,adjno);

                }

            }

            }

        }

    }

        

    int mx=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(grid[i][j] == 0){

            int dr[]={-1,0,1,0};

            int dc[]={0,1,0,-1};

            set<int>st;

            for(int k=0;k<4;k++){

                int nrow=i+dr[k];

                int ncol=j+dc[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && grid[nrow][ncol] == 1){

                    int no=nrow*n+ncol;

                    st.insert(ds.findUpar(no));

                }

            }

            int total=1;

            for(auto it:st){

                total+=ds.size[it];

            }

            mx=max(mx,total);

        }

    }

}

        

if(mx == 0){

    return n*n;

}

return mx;

}
