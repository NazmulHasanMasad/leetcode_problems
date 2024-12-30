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

bool SameTree(Node *p, Node *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    if (p == NULL || q == NULL)
    {
        return false;
    }

    if (p->data == q->data)
    {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    return false;
}

int main()
{
    struct Node *p = new Node(1);

    p->left = new Node(2);
    p->right = new Node(3);

    struct Node *q = new Node(1);

    q->left = new Node(2);
    q->right = new Node(4);

    cout << SameTree(p, q);

    return 0;
}