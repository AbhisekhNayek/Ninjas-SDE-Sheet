int findMaxFruits(vector<int> &str, int n) {
    // Write your code here.
    int start =0, end =0, maxi =0;
   unordered_map<int, int> ump;
   while(end < n){
        ump[str[end]]++;
        while(ump.size() > 2){
            ump[str[start]]--;
            if(ump[str[start]] == 0){
                ump.erase(str[start]);  
            }
            start++; 
        }
        maxi = max(maxi, end-start+1);
        end++;
    }
    return maxi;
}
