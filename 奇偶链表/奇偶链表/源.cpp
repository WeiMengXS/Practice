#define _CRT_SECURE_NO_WARNINGS 1
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (!head || !head->next) return head;
		ListNode *pre = head, *cur = head->next;
		while (cur && cur->next){
			ListNode* tmp = pre->next;
			pre->next = cur->next;
			cur->next = cur->next->next;
			pre->next->next = tmp;

			pre = pre->next;
			cur = cur->next;
		}
		return head;
	}
};
