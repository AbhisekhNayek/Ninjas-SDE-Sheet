#include<bits/stdc++.h>

bool possible(vector<int> nums,int dis,int cows)
{
    cows--;

    int mindis=INT_MAX,pos=nums[0];
    int i=1,n=nums.size();

    while(i<n&&cows>=1)
    {
       if((nums[i]-pos)>=dis)
       {
           mindis=min(mindis,nums[i]-pos);
           pos=nums[i];
           cows--;
           i++;
       }
       else i++;
    }

    if(cows!=0) return 0;
        return (mindis>=dis);
}

 
int aggressiveCows(vector<int> &nums, int k)
{
    sort(nums.begin(),nums.end());

    int n=nums.size();
    int low=nums[1]-nums[0];
    int high=nums[n-1]-nums[0];
    int mid;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(possible(nums,mid,k))
            low=mid+1;
        else 
            high=mid-1;
    }
    return high;
}
