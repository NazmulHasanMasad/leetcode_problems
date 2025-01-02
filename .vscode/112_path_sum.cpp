#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val)
    {
        val = val;
        left = NULL;
        right = NULL;
    }
};

bool hasPathSum(TreeNode *root, int targetSum)
{
    if (!root)
    {
        return false;
    }

    if (!root->left && !root->right)
    {
        return targetSum == root->val;
    }

    bool leftSum = hasPathSum(root->left, targetSum - root->val);
    bool rightSum = hasPathSum(root->right, targetSum - root->val);

    return leftSum || rightSum;
}

int main()
{

    int targetSum = 22;
    struct TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);

    cout << hasPathSum(root, targetSum);
    return 0;
}