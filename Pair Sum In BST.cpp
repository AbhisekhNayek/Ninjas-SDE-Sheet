#include <unordered_set>
using namespace std;

/**********************************************************
    Following is the Binary Tree Node structure:

    class BinaryTreeNode
    {
    public:
        int data;
        BinaryTreeNode *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(int x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(int x, BinaryTreeNode *left, BinaryTreeNode *right) : data(x), left(left), right(right) {}
    };
***********************************************************/


// Function to check if there exists a pair of nodes in BST that sums up to k
bool pairSumBstUtil(BinaryTreeNode* root, int k, unordered_set<int>& seen) {
    if (root == nullptr)
        return false;

    // Check if current node's value complements with any previously seen node
    if (seen.find(k - root->data) != seen.end())
        return true;

    // Add the current node's value to the set of seen values
    seen.insert(root->data);

    // Recur for left and right subtrees
    return pairSumBstUtil(root->left, k, seen) || pairSumBstUtil(root->right, k, seen);
}

bool pairSumBst(BinaryTreeNode* root, int k) {
    unordered_set<int> seen;
    return pairSumBstUtil(root, k, seen);
}
