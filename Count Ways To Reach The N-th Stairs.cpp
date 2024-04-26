#include <bits/stdc++.h> 

int m = 1e9 + 7;

int countDistinctWays(int nStairs) {

    if(nStairs == 0){
        return 1;
    }

    if(nStairs == 1){
        return 1;
    }

    int prev1 = 1;
    int prev2 = 1;
 
    for(int i = 2; i <= nStairs; i++){
        int curr = (prev1 + prev2) % m;
        prev2 = prev1;
        prev1 = curr;    
    }  
    return prev1;
}
