#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct Node
{
	int data;
	struct Node* next;		

}Node;

typedef struct Node* LinkList;

void PrintList(const LinkList p)
{
	LinkList q = p;
	while(q != NULL)
	{
		cout<<"node data"<<q->data<<endl;
		q = q->next;
	}
}
int main()
{
	// first node
	LinkList p = new Node;
	p->data = 100;
	p->next = NULL;
	LinkList q = p;
	//create subsquent node	
	for(int i =0 ; i < 100 ; i++)
	{
		LinkList node = new Node;
		node->data = i;
		node->next = q;
		q = node;
		cout<<"create node"<<i<<endl; 		
	}
	p->next = q;
	PrintList(q);
	return 0;
}
