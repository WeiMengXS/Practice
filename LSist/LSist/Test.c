#define _CRT_SECURE_NO_WARNINGS 1
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val){
	ListNode* cur = head;
	ListNode* newhead = NULL;
	ListNode* newtail = NULL;
	while (cur)
	{
		// 保存下一个
		ListNode* next = cur->next;
		if (cur->val == val)
		{
			free(cur);
			cur = next;
		}
		else
		{
			// 尾插
			if (newtail == NULL)
			{
				newtail = newhead = cur;
			}
			else
			{
				newtail->next = cur;
				newtail = cur;
			}

			newtail->next = NULL;

			cur = next;

		}
	}

	return newhead;
}