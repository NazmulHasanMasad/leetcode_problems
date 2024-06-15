#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

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

bool hasCycle(ListNode *head)
{
    ListNode *Poniter1 = head;
    ListNode *pointer2 = head;

    while (pointer2 != NULL && pointer2->next != NULL)
    {
        Poniter1 = Poniter1->next;
        pointer2 = pointer2->next->next;

        if (Poniter1 == pointer2)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ListNode *head = NULL;

    insertATtail(head, 3);

    insertATtail(head, 2);

    insertATtail(head, 0);

    insertATtail(head, 4);

    return 0;
}