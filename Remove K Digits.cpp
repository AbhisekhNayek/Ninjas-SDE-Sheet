string removeKDigits(string num, int k) {
  stack<int> st;

  for (auto ch : num) {
    int n = ch - '0';
    while (!st.empty() and st.top() > n and k > 0)
      st.pop(), k--;

    st.push(n);
  }

  while (!st.empty() and k > 0)
    st.pop(), k--;

  string res;
  while (!st.empty()) {
    res += to_string(st.top());
    st.pop();
  }

  reverse(res.begin(), res.end());

  int i = 0;
  while (i < res.size() and res[i] == '0')
    i++;

  string newRes = res.substr(i);
  return newRes == "" ? "0" : newRes;
}
