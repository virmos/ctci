#include "return_Kth_tolast.h"

/*
1 -> 2 -> 3 -> 4 -> 5
recursion: 7ms
*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
	int num = removeNthFromEndStep(head, nullptr, n - 1);
	if (num == -1) {
		return head->next;
	}
	return head;
}

int removeNthFromEndStep(ListNode* head, ListNode* prev, int n) {
	if (head == nullptr) return 0;

	int counter = removeNthFromEndStep(head->next, head, n);

	if (counter == n) {
		if (prev == nullptr) return -1;
		prev->next = head->next;
	}
	return counter + 1;
}

/*
		1 -> 2 -> 3 -> 4 -> 5
n = 2		 1    0
p2=						*

		1 -> null
n = 0
double pointers: 0ms
*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* p1 = head; ListNode* p2 = head;
	if (!head->next)return nullptr;
	else {
		while (n-- && p2->next) { p2 = p2->next; }
		// if we use while(p2->next && n--) then the while will stop
		// when it see p2->next == nullptr without perform the latter && n--
		while (p2->next) { p1 = p1->next; p2 = p2->next; }
		if (n == -1)p1->next = p1->next->next;
		else if (n == 0) return head->next;
	}
	return head;
}