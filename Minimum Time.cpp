int minimumTime(int n, vector<vector<int>> &a)
{
 vector<vector<int>>vis(n,vector<int>(n,0));
    
 typedef pair<int,pair<int,int>>p; //val r,c
    priority_queue<p,vector<p>,greater<p>>pq;
    
    pq.push({a[0][0],{0,0}});
    vis[0][0]=1;
    int ans=a[0][0];

    int drow[]={-1,0,1,0};
    int dcol[]={0,-1,0,1};
    
    while(!pq.empty())
    {
        auto top=pq.top();pq.pop();
        int t=top.first;
        int r=top.second.first;
        int c=top.second.second;

      if(r==n-1 && c==n-1)return max(ans,t);
        for(int i=0;i<4;i++)
        {
            int nr=r+drow[i];
            int nc=c+dcol[i];

  if(0<=nr&&0<=nc&&nr<n&&nc<n&&!vis[nr][nc])
            {
                ans=max(ans,t);
                vis[nr][nc]=1;
               pq.push({a[nr][nc],{nr,nc}});
            }
        }
    }
}
