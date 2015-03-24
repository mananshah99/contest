#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
   Node *tailnode = new Node();
   tailnode->data = data;
   tailnode->next = NULL;
    
   //same as inserting to the front 
   if(head == NULL)
       return tailnode;
    
   Node *traverse = head;
   while(traverse->next != NULL)
       traverse = traverse->next;
   traverse->next = tailnode; //set last node as tail
    
   return head;
}void Print(Node *head)
{
	Node *temp = head;
	while(temp!= NULL){ cout<<temp->data<<"\n";temp = temp->next;}
}
int main()
{
	int t;
	cin>>t;
	Node *head = NULL;
	while(t-- >0)
	{
		int x; cin>>x;
		head = Insert(head,x);
	}
	Print(head);
}