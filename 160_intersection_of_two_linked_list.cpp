#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void insertATthehead(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertATtail(ListNode *&head, int val)
{

    if (head == NULL)
    {
        insertATthehead(head, val);
        return;
    }
    ListNode *n = head;
    ListNode *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *s1 = headA;
    ListNode *s2 = headB;

    if (s1 == NULL || s2 == NULL)
        return NULL;

    while (s1 != NULL && s2 != NULL && s1 != s2)
    {
        s1 = s1->next;
        s2 = s2->next;

        if (s1 == s2)
            return s1;

        if (s1 == NULL)
            s1 = headB;
        if (s2 == NULL)
            s2 = headA;
    }
    return s1;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    unordered_map<string, int> m;
    while (headA != 0)
    {
        m[headA]++;
    }

    while (headB != 0)
    {
        if (m[headB] > 0)
            return headB;
    }

    return NULL;
}

int main()
{

    return 0;
}