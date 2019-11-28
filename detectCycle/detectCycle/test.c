#define _CRT_SECURE_NO_WARNINGS 1

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
typedef struct ListNode Node;
struct ListNode *detectCycle(struct ListNode *head) {
	Node* frist = head;
	Node* slow = head;
	while (frist&&frist->next)
	{

		slow = slow->next;
		frist = frist->next->next;
		if (frist == slow)
		{
			Node* cur = head;
			Node*prve = slow;

			while (prve != cur&&prve)
			{
				cur = cur->next;
				prve = prve->next;
				printf("%d", 2);
				if (cur == prve)
				{
					return cur;
				}
			}
			return cur;
		}



	}
	return NULL;

}