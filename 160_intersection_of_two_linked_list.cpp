#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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

int main()
{

    return 0;
}