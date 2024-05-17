#include <bits/stdc++.h>
void solve(int idx,vector<int> arr,int n,int target,vector<vector<int>> &ans,vector<int>& output)
{
	if(target ==0)
	{
		ans.push_back(output);
		return;
	}
	for(int i=idx;i<n;i++)
	{
		if( i > idx && arr[i] == arr[i-1])
		 continue;
		if(target < arr[i])
		 break;
		output.push_back(arr[i]);
		solve(i+1, arr, n, target-arr[i], ans, output);
		output.pop_back();
	}
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> output;
	solve(0,arr,n,target,ans,output);
	return ans;
}
