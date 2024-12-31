#include <iostream>

using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

TreeNode *invertTree(TreeNode *root)
{

    if (root == NULL)
    {
        return NULL;
    }

    invertTree(root->left);
    invertTree(root->right);

    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}

int main()
{

    return 0;
}