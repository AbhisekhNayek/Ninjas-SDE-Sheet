#include <bits/stdc++.h>
 

vector<int> collidingAsteroids(vector<int>& asteroids)
{


    int n = asteroids.size();

    vector<int> ans;
    stack<int> s;


    for(int i=0; i<n; i++){

        int curr = asteroids[i];

        bool flag = false;

        while(!s.empty() && (s.top()>0 && curr<=0)){

            if(s.top() == -curr){
                s.pop();

                flag = true;
                    break;

            }

            // Case 2: If s.top > curr

            else if(s.top() > abs(curr)){

                flag = true;
                    break;
            }

 

            // Case 3: If curr > s.top

            else{
                s.pop();
            }
        }
        if(!flag){
            s.push(curr);
        }
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;

}
