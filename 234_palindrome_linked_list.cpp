#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    ListNode *prviousptr = NULL;
    ListNode *currrentptr = head;

    while (currrentptr != NULL)
    {
        ListNode *temp = new ListNode(currrentptr->val);
        temp->next = prviousptr;
        prviousptr = temp;
        currrentptr = currrentptr->next;
    }

    while (head && prviousptr)
    {
        if (head->val != prviousptr->val)
        {

            return false;
        }
        head = head->next;
        prviousptr = prviousptr->next;
    }
    return true;
}
