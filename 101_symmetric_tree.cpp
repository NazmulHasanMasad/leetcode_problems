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

bool isMirror(TreeNode *left, TreeNode *right)
{
    if (!left && !right)
        return true;

    if (!left || !right)
        return false;

    return (left == right) && isMirror(left->left, right->right) && isMirror(left->right, right->left)
}

bool isSymmetric(TreeNode *root)
{
    return (!root) return true;

    isMirror(root->left, root->right);
}

int main()
{

    return 0;
}
