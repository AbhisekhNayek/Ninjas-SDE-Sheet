#include <bits/stdc++.h> 

int N;
int t[1001][1001];

bool solve(vector<int>&arr,int k,int idx,int sum)
{
    if(sum==k)
    {
        return true;
    }
    if(t[idx][sum]!=-1)
    {
        return t[idx][sum];
    }

    if(idx>=N || sum>k)
    {
        return t[idx][sum]= false;
    }

    if(solve(arr,k, idx+1,sum+arr[idx]))
    {
        return t[idx][sum]= true;
    }

    if(solve(arr,k,idx+1,sum))
    {
        return t[idx][sum]= true;
    }
    return t[idx][sum]= false;
}

bool subsetSumToK(int n, int k, vector<int> &arr) 
{
    N=n;
    memset(t,-1,sizeof(t));
    return solve(arr,k,0,0);
}
