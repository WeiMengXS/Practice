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
	ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
	newhead->next = NULL;
	ListNode* newtail = newhead;
	printf("%d", __LINE__);
	while (cur)
	{
		// 保存下一个
		ListNode* next = cur->next;

		printf("%d", __LINE__);
		if (cur->val == val)
		{
			free(cur);
			cur = next;
			printf("%d", __LINE__);
		}
		else
		{
			newtail->next = cur;
			printf("%d", __LINE__);
			newtail = cur;
			newtail->next = NULL;

			cur = next;

		}
	}

	printf("%d", __LINE__);
	ListNode* first = newhead->next;
	free(newhead);
	return first;
}