#include<bits/stdc++.h>

int rangeSum(vector<int>&nums)
{
  int n =nums.size();
  stack<int>s;
  long sum=0;
  for(int i=0;i<=nums.size();i++)
  {
      while(!s.empty() &&
       (i==n || nums[s.top()]>=nums[i]))
      {
          int mid=s.top();
          s.pop();
          int j=s.empty()? -1:s.top();
          sum-=nums[mid]*(i-mid)*(mid-j);
      }
      s.push(i);
  }  

  s.pop();
  
  for(int i=0;i<=nums.size();i++)
  {
      while(!s.empty() &&
       (i==n || nums[s.top()]<=nums[i]))
      {
          int mid=s.top();
          s.pop();
          int j=s.empty()? -1:s.top();
          sum+=nums[mid]*(i-mid)*(mid-j);
      }
      s.push(i);
  } 
  return sum; 
}
