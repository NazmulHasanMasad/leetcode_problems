#include <iostream>
#include <bits/stdc++.h>

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

vector<double> averageOfLevels(TreeNode *root)
{

    queue<TreeNode *> q;

    q.push(root);

    vector<double> ans;

    while (!q.empty())
    {
        int n = q.size();
        double sum = 0;

        for (int i = 0; i < n; i++)
        {
            TreeNode *node = q.front();

            q.pop();

            sum += node->val;

            if (node->left)
            {

                q.push(node->left);
            }

            if (node->right)
            {
                q.push(node->right);
            }
        }

        ans.push_back((double)sum / n);
    }
}

int main()
{
    struct TreeNode *root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    averageOfLevels(root);

    return 0;
}