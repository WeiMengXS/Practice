#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	Node* copyRandomList(Node* head) {
		if (!head) return head;
		Node *p = head;
		Node dummyHead, *tail;
		tail = &dummyHead;
		while (p){
			tail->next = new Node(0);
			tail = tail->next;
			memcpy(tail, p, sizeof(Node));
			p->random = tail;
			p = p->next;
		}
		tail = dummyHead.next;
		while (tail){
			if (tail->random)
				tail->random = tail->random->random;
			tail = tail->next;
		}
		return dummyHead.next;
	}
};

