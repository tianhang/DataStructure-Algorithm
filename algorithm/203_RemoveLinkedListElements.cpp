#include<iostream>

using namespace std;
struct ListNode{
	int val;
	ListNode * next;
	ListNode(int x):val(x),next(NULL){}
};

ListNode* reverseList(ListNode* head)
{
	ListNode* p = head;
	if(head == NULL)
		return head;
// head node which make it convenient to create list by head-insert way 
	ListNode* newHead = new ListNode(0);	
	while(p != NULL)
	{
		ListNode *node = new ListNode(p->val);
		node->next = newHead->next;
		newHead->next = node; 
		p = p->next;
	}
//return the list from the first node , not head node
	return newHead->next;
}

string removeElements(ListNode* head,int val)
{
// create a fake headNode ,so that we can solve the headnode issue easily!
	ListNode* dummy = new ListNode(-1);
	dummy->next = head;	
	ListNode* p = dummy;

	while(p->next)	
	{
		if(p->next->val == val)	
		{
			p->next = p->next->next;
		}
		else
		{
			p = p->next;
		}
	}
	return dummy->next;
}
int main()
{
	ListNode* head = new ListNode(0);
	ListNode* p = head;
	for(int i=1;i<10;i++)
	{
		
		ListNode* node = new ListNode(i);
		p->next = node;
		p = node;
	}
	ListNode* q = reverseList(head); 
	while(q != NULL)
	{
		cout<<q->val<<endl;
		q = q->next;
	}

	return 0;
}
