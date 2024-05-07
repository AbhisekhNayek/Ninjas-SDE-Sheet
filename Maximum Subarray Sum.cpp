long long maxSubarraySum(vector<int> arr, int n)
{
    long long int ans=0,sum=0;;

    for(int i:arr)
    {
       sum+=i;
       ans=(ans>sum)?ans:sum;

       if(sum<0)
       {
           sum=0;
       }
    }
     return (ans>0)? ans:0;
}
