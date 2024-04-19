#include<bits/stdc++.h>
bool isValid(int i,int j, int n, int m, int** arr){
    if(i>=0 && i<n && j>=0 && j<m && arr[i][j]==1){
        return true;
    }
    return false;
}

void Rec(int i, int j, int n, int m, int** arr, string& path) {
    arr[i][j] = 0; // Mark as visited

    if (isValid(i + 1, j, n, m, arr)) {
        path += 'D'; // Down
        Rec(i + 1, j, n, m, arr, path);
    }
    if (isValid(i - 1, j, n, m, arr)) {
        path += 'U'; // Up
        Rec(i - 1, j, n, m, arr, path);
    }
    if (isValid(i, j + 1, n, m, arr)) {
        path += 'R'; // Right
        Rec(i, j + 1, n, m, arr, path);
    }
    if (isValid(i, j - 1, n, m, arr)) {
        path += 'L'; // Left
        Rec(i, j - 1, n, m, arr, path);
    }

    path += 'X'; // End of island
}
int distinctIslands(int** arr, int n, int m)
{
    //Write your code here
    unordered_set<string> islands;

    for(int i = 0 ; i<n ;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                string path;
                Rec(i,j,n,m,arr,path);
                islands.insert(path);
            }
        }
    }
    return islands.size();
}
