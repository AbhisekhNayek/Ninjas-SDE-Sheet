int maxDepth(string s) 
{
	int ans=0, ctOpen=0;
	for(int i=0; i<s.length(); i++)
	{
		if( s[i]=='(' ){
			ctOpen++;
		}
		else if( s[i] == ')'){
			ctOpen--;
		}
			ans = max(ans, ctOpen);
	}
	return ans;
}
