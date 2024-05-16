void recursion(BinaryTreeNode<int> *root, int level, vector<int> &ans) {
  if (root == NULL)
        return;

  if (ans.size() == level)
        ans.push_back(root->data);
        recursion(root->left, level + 1, ans);
        recursion(root->right, level + 1, ans);
}

 

vector<int> printLeftView(BinaryTreeNode<int> *root) 
{
  vector<int> ans;
  recursion(root, 0, ans);
    return ans;
}
