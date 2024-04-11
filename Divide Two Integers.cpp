#include<bits/stdc++.h>
int divideTwoInteger(int dividend, int divisor) {
	// Write your code here.
	 if (dividend == INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==divisor)return 1;

        unsigned int n=abs(dividend),d=abs(divisor);
        bool neg=false;
        if(dividend <0 && divisor>=0)neg=true;
        else if(dividend >=0 && divisor<0)neg=true;
        unsigned int ans=0;
        while(n>=d){
            short count=0;
            while(n > (d<<count+1)){
                count++;
            }
            ans+=1<<count;
            n-=(d*(1<<count));
        }
        if(neg)ans*=-1;
        return ans;
} 
