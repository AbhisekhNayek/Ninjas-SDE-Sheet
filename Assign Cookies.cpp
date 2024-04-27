int assignCookie(vector<int> &greed, vector<int> &size) {

    int n=greed.size();
    int m=size.size();

    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());

    int j=m-1;
    int count=0;

    for(int i=n-1;i>=0;i--){

        if(greed[i]<=size[j]){

            count++;
            j--;
        }
    }
    return count;
}
