bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.length();

     for(int i=0;i<n;i++){
         if((str[0] == str[n-1]) && (str[1] == str[n-2])){
             return true;
         }
         else{
                return false;
         } 
     }
}
