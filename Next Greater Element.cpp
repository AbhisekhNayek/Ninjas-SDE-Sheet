#include<bits/stdc++.h>

vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int> v;
    stack<int> s;

    s.push(arr[n-1]);

    for (int i = n - 2; i >= 0; i--) {

        while (!s.empty() && s.top() <= arr[i]) {

            s.pop(); // Pop elements less than or equal to arr[i]

        }

        if (s.empty()) {

            v.push_back(-1); // No greater element found

        } else {

            v.push_back(s.top()); // Found next greater element

        }

        s.push(arr[i]); // Push current element to stack

    }

    reverse(v.begin(), v.end()); // Reverse the result
	
    v.push_back(-1); // Add -1 for the last element

    return v;
}
