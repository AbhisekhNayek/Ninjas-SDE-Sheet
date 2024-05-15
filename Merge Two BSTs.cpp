/*************************************************************

    Following is the Binary Tree node structure:

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

void inorder(TreeNode *root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int>ans;
    inorder(root1,ans);
    inorder(root2,ans);
    sort(ans.begin(),ans.end());

    return ans;
}
