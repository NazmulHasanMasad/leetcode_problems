#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head)
{

    ListNode *previousptr = NULL;
    ListNode *currentptr = head;
    ListNode *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;
        previousptr = currentptr;
        currentptr = nextptr;
    }

    return previousptr;
}

int main()
{

    return 0;
}