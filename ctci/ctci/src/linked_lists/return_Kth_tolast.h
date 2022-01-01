#ifndef _RETURN_KTH_TOLAST_
#define _RETURN_KTH_TOLAST_

struct ListNode {
	int val;
	ListNode* next;
	ListNode();
};
ListNode* removeNthFromEnd(ListNode* head, int n);
int removeNthFromEndStep(ListNode* head, int n);

#endif
