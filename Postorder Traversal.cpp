/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void postOder(TreeNode * root, vector<int>&v){
    if(root==NULL){
        return;
    }
    postOder(root->left, v);
    postOder(root->right, v);
    v.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root){

    vector<int>v;
    postOder(root, v);

    return v;
}
