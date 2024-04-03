vector<int> printNos(int x) {
    // Write Your Code Here
    if(x > 0){
        printNos(x-1);
        cout<<x<<" ";
    }
    return {};
}
