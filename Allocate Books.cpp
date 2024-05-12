bool isPossible(vector<int>&arr,int n,int m,int mid)
{
    int studentCount = 1;
    int ans = 0;

    for(int i=0;i<n;++i)
    {
        if(ans+arr[i]<=mid)
        {
            ans+=arr[i];
        }
        else
        {
            studentCount++;

            if(studentCount>m || arr[i]>mid)
            {
                return false;
            }
            ans = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {

    if(m>n)
    {
        return -1;
    }

    int sum = 0;

    for(int i:arr)
    {
        sum+=i;
    }

    int start = 0, end = sum, mid = start+(end-start)/2, ans = -1;
    while(start<=end)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
