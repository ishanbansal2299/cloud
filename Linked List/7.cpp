#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};

void loop(node *head)
{
	node *p1=head;
	node *p2=head;
	while(p2!=NULL)
	{
		if(p2->next==p1)
		{
			cout<<"Circular linked list";
			return;
		}
		else
		{
			p2=p2->next;
		}
	}
}
void insert(node **head1, int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=NULL;
	if(*head1==NULL)
	{
		*head1=temp;
		return;
	}
	node *last_node=*head1;
	while(last_node->next!=NULL)
	{
		last_node=last_node->next;
	}
	last_node->next=temp;
	return;
}
int main()
{
	node *head=NULL;
	insert(&head,10);
	insert(&head,8);
	insert(&head,19);
	insert(&head,8);
	insert(&head,10);
	head->next->next->next->next->next=head;
	loop(head);
}
