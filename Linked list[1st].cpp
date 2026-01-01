#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node *next;
};
Node *first,*temp,*ttemp;
void init() 
{
 first=temp=temp=NULL;
}
void create_first()
{
 first = new Node;
 first -> next = NULL;
 cin>>first -> data;
}
void Add_Node ()
{
 temp = first;
 while(temp -> next != NULL)
 {
  temp = temp -> next;
 }
 ttemp = new Node;
 cin>>ttemp->data;
 ttemp->next = NULL;
 temp -> next = ttemp;
}
void disp()
{
 temp = first;
 while(temp != NULL)
 {
  cout<<temp->data<<endl;
  temp = temp -> next;
 }
}
int main()
{
 init();
 create_first();
 for(int i=1;i<4;i++)
 {
  Add_Node();
 }
 disp();
}    