void helper(string curr, int open,int close,vector<string>& ans,int n){
    if(n == open && open == close){
        ans.push_back(curr);
        return;
    }
    if(open<n){
        helper(curr+'(',open+1, close,ans,n);
    }
    if(close<open){
        helper(curr+')',open,close+1,ans,n);
    }
    return;
}
vector<string> validParenthesis(int n){
    // Write your code here.
  vector<string> ans;
  helper("",0,0,ans,n);
  return ans;
}
