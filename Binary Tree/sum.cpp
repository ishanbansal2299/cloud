#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
int sum(node *root)
{
	if(root==NULL)
		return 0;
	return sum(root->right)+sum(root->right)+root->data;
}
void print(node *root)
{
	if(root==NULL)
		return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}
int main()
{
	node *root;
	root=new node();
	root->data=5;
	node *temp=new node();
	temp->data=15;
	root->left=temp;
	node *temp1=new node();
	temp1->data=20;
	root->right=temp1;
	node *temp2=new node();
	temp2->data=21;
	root->left->left=temp2;
	node *temp3=new node();
	temp3->data=17;
	root->right->right=temp3;
	print(root);
	cout<<"\n";
	cout<<sum(root);
}
