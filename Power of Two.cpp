bool isPowerOfTwo(int n)
{   

    n=abs(n);

    int count=0;

    while(n!=0){
       
        int a=n&1;

        if(a==1){
            count++;
        }
        n=n>>1;
    }

    if (count>1){
        return false;
    }
    return true;
}
