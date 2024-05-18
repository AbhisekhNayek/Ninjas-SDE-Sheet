/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*************************************************************/

TreeNode* solve(vector<int> &preOrder, int &i, int bound)
{
    if(i == preOrder.size() || preOrder[i] > bound) 
        return nullptr;

    TreeNode* root = new TreeNode(preOrder[i++]);
    root->left = solve(preOrder, i, root->data);
    root->right = solve(preOrder, i, bound);

    return root;
}

TreeNode *preOrderTree(vector<int> &preOrder)
{
    int i;
    return solve(preOrder, i, INT_MAX);
}

