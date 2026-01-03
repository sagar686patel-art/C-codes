#include<stdio.h>
#include<iostream>
using namespace std;
struct CLL
{
 int data;
 CLL *next;
};
CLL *first,*temp,*ttemp,*P;
void init() 
{
 first=temp=ttemp=P=NULL;
} 
void create_first()
{
 first = new CLL;
 cin>>first->data;
 first->next=first;
}
void Add_Node()
{
 temp=first;
 while(temp->next!=first)
 {
  temp=temp->next;
 }
 ttemp = new CLL;
 cin>>ttemp->data;
 ttemp->next=first;
 temp->next=ttemp;
} 
void disp()
{
 temp=first;
 do
 {
  cout<<temp->data<<endl;
  temp=temp->next;
 }while(temp!=first);
}
void Add_Before_first()
{
 temp=first;
 while(temp->next=first)
 {
  temp=temp->next;
 }
 ttemp = new CLL;
 cin>>ttemp->data;
 ttemp->next=first;
 temp->next=ttemp;
 first=ttemp;
}
void Del_first()
{
 P=temp=first;
 while(temp->next!=first)
 {  
  temp=temp->next;
 }
 first=first->next;
 temp->next=first;
 P->next=NULL;
 delete P;
}
void Del_last()
{
 temp=first;
 while(temp->next!=first)
 {
  ttemp=temp;
  temp=temp->next;
 }
 ttemp->next=first;
 temp->next=NULL;
 delete temp;
}
void swap_FS()
{
 temp=first;
 while(temp->next!=first)
 { 
  temp=temp->next;
 }
 ttemp=first->next;
 P=ttemp->next;
 temp->next=ttemp;
 ttemp->next=first;
 first->next=P;
 first=ttemp;
}
void swap_FL()
{
 temp=first;
 while(temp->next!=first)
 { 
  ttemp=temp;
  temp=temp->next;
 }
 P=first->next;
 ttemp->next=first;
 first->next=temp;
 temp->next=P;
 first=temp;
}
void swap_LSL()
{ 
 temp=first;
 while(temp->next->next!=first)
 {
  ttemp=temp;
  temp=temp->next;
 }
 P=temp->next;
 ttemp->next=P;
 temp->next=first;
 P->next=temp;
}  
int main()
{
 init();
 create_first();
 Add_Node();
 Add_Node();
 Add_Node();
 swap_LSL0565v();
 cout<<endl;
 disp();
 cout<<endl;
 
 disp();
}