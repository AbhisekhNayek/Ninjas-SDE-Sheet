bool isBalanced(string s){

    // Write your code here.

    stack<char> stk;

    for(int i=0;i<s.length();i++){

        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '[') stk.push(ch);

        else{

            if(!stk.empty()){

              if ((ch == ')' && stk.top() == '(') || (ch == '}' && stk.top() == '{') || (ch == ']' && stk.top() == '[')){

                      stk.pop();

                  }

              else return false;

            }

            else return false;

        }

    }

    if(stk.empty()) return true;

    else return false;

 

}
