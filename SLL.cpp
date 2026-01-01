#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node *next;
};
Node *first,*temp,*ttemp,*P,*Q,*R,*S;
void init() 
{
 first=temp=ttemp=P=Q=R=S=NULL;
} 
void create_first()
{
 first = new Node;
 cin>>first->data;
 first->next = NULL;
}
void Add_Node()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp = new Node;
 cin>>ttemp->data;
 ttemp->next=NULL;
 temp->next=ttemp;
}
void Add_after(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
  ttemp=temp->next;
 }
 P = new Node;
 cin>>P->data;
 P->next=ttemp;
 temp->next=P;
}
void Add_before(int x)
{
 temp=first;
 while(temp->data!=x) 
 {
  ttemp=temp;
  temp=temp->next;
 }
 P = new Node;
 P->next=temp;
 cin>>P->data;
 ttemp->next=P;
} 
void Del_after(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
 } 
 ttemp=temp->next;
 P=ttemp->next;
 temp->next=P;
 ttemp->next=NULL;
 delete (ttemp); 
}
void Del_before(int x)
{
 temp=first;
 while(temp->next->next->data!=x)
 {
  temp=temp->next;
 }
 ttemp=temp->next;
 P=ttemp->next;
 temp->next=P;
 ttemp->next=NULL;
 delete(ttemp);
}  
void disp()
{
 temp=first;
 while(temp!=NULL)
 {
  cout<<temp->data<<endl;
  temp=temp->next;
 }
}  
void Add_Before_first()
{
 temp = new Node;
 cin>>temp->data;
 temp->next=first;
 first=temp;
}
void Del_first_node()
{
 temp=first;
 first=first->next;
 temp->next=NULL;
 delete (temp);
}
void Del_last_node()
{
 temp=first;
 while(temp->next!=NULL)
 {
  ttemp=temp;
  temp=temp->next;
 }
 ttemp->next=NULL;
 temp->next=NULL;
 delete (temp);
} 
void Del_Secondlast()
{
 temp=first;
 while(temp->next->next->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp=temp->next;
 P=ttemp->next;
 temp->next=P;
 ttemp->next=NULL;
 delete (ttemp);
}
void reverse()
{ 
 temp=first;
 while(temp!=NULL)
 {
  ttemp=temp->next;
  temp->next=P;
  P=temp;
  temp=ttemp;
 }
 first=P;
}
void swap_mn(int m,int n)
{
 temp=first;
 ttemp=first;
 while(temp->data!=m)
 {
  P=temp;
  temp=temp->next;
 } 
  Q=temp->next;
 
 while(ttemp->data!=n)
 {
  R=ttemp;
  ttemp=ttemp->next;
 }
  S=ttemp->next;
 
 P->next=ttemp;
 ttemp->next=Q;
 R->next=temp;
 temp->next=S;
}  
int main()
{
 init();
 create_first();
 Add_Node();
 Add_Node();
 Add_Node();
 for(int i=0;i<6;i++)
 {
  Add_Node();
 } 
 cout<<endl;
 disp();
 cout<<endl;
 swap_mn(40,70);
 disp();
 cout<<endl;
 //reverse();
 //disp();
}