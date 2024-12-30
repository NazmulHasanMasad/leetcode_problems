#include <iostream>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(Node *root)
{
    if (root == 0)
    {

        return 0;
    }

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main()
{
    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << maxDepth(root);

    return 0;
}