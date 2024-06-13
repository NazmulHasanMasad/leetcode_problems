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
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertATtail(ListNode *&head, int val)
{
	ListNode *n = new ListNode(val);

	if (head == NULL)
	{
		head = n;
		return;
	}

	ListNode *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

	if (list1 == NULL)
	{
		return list2;
	}
	if (list2 == NULL)
	{
		return list1;
	}

	ListNode *result;

	if (list1->val < list2->val)
	{

		result = list1;
		result->next = mergeTwoLists(list1->next, list2);
	}
	else
	{
		result = list2;
		result->next = mergeTwoLists(list2->next, list1);
	}

	return result;
}

void display(ListNode *head)
{
	ListNode *temp = head;
	while (temp != NULL)
	{
		cout << temp->val << " ";
		temp = temp->next;
	}
}

int main()
{
	ListNode *list1 = NULL;
	ListNode *list2 = NULL;

	int array1[] = {1, 2, 4};
	int array2[] = {1, 3, 4};

	for (int i = 0; i < 3; i++)
	{

		insertATtail(list1, array1[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		insertATtail(list2, array2[i]);
	}

	// display(list1);
	//  display(list2);

	ListNode *newHead = mergeTwoLists(list1, list2);
	display(newHead);
	return 0;
}