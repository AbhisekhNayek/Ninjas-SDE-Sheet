int calculateMinPatforms(int at[], int dt[], int n) 
{
    sort(at,at+n);
    sort(dt,dt+n);

    int platform=1;

    int j=0;int i=1;
    int res=1;

    while(i<n && j<n)
    {
        if(at[i]<=dt[j])
        {
            platform++;
            i++;
        }
        else{
            platform--;
            j++;
        }
        res=max(platform,res);
    }
    return res;
}
