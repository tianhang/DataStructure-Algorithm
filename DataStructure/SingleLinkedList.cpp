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
int headInsert()
{
	//head insert way
	//header node
	LinkList p = new Node;
	p->next = NULL;
	//create subsquent node	
	for(int i =0 ; i < 100 ; i++)
	{
		LinkList node = new Node;
		node->data = i;
		node->next = p->next;
		p->next = node;
	}
	PrintList(p);
	return 0;
}
LinkList rearInsert()
{
	//rear insert way
	// p is header node, q is variable node
	LinkList q,p = new Node;
	p-> next = NULL;
	q = p;	
	for(int i=0; i < 100; i++)	
	{
		LinkList node = new Node;
		node->data = i;		
		node->next = NULL;
		q->next = node;
		q = node;	
	}
	PrintList(p);
}
int main()
{
	cout<<"head insert ..."<<endl;
	headInsert();
	cout<<"rear insert ..."<<endl;
	rearInsert();
	return 0;
}
