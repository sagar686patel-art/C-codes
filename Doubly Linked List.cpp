#include<stdio.h>
#include<iostream>
using namespace std;
struct DLL
{
 int data;
 DLL *next,*Prev;
};
DLL *first,*temp,*ttemp,*P;
void init() 
{
 first=temp=ttemp=P=NULL;
} 
void create_first()
{
 first = new DLL;
 cin>>first->data;
 first->next = NULL;
 first->Prev=NULL;
}
void Add_Node()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp = new DLL;
 cin>>ttemp->data;
 ttemp->Prev=temp;
 ttemp->next=NULL;
 temp->next=ttemp;
} 
void Add_after(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
 }
 ttemp=temp->next;
 P = new DLL;
 cin>>P->data;
 P->next=ttemp;
 P->Prev=temp;
 temp->next=P;
 ttemp->Prev=P;
}
void Add_before(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 P = new DLL;
 cin>>P->data;
 P->next=temp;
 P->Prev=ttemp;
 temp->Prev=P;
 ttemp->next=P;
} 
void Add_Before_first()
{
 temp = new DLL;
 cin>>temp->data;
 temp->Prev=NULL;
 temp->next=first;
 first->Prev=temp;
 first=temp;
} 
void Add_Before_last()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 P=temp->Prev;
 ttemp = new DLL;
 cin>>ttemp->data;
 ttemp->next=temp;
 ttemp->Prev=P;
 temp->Prev=ttemp;
 P->next=ttemp;
}
void Del_before(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 P=ttemp->Prev;
 P->next=temp;
 temp->Prev=P;
 ttemp->next=ttemp->Prev=NULL;
 delete ttemp;
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
void Del_after(int x)
{
 temp=first;
 while(temp->data!=x)
 {
  temp=temp->next;
 }
 ttemp=temp->next;
 P=ttemp->next;
 P->Prev=temp;
 temp->next=P;
 ttemp->next=ttemp->Prev=NULL;
 delete ttemp;
}
void Del_first()
{
 temp=first;
 first=first->next;
 temp->next=temp->Prev=NULL;
 delete temp;
}    
void Del_last()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 ttemp->next=NULL;
 temp->next=temp->Prev=NULL;
 delete temp;
}
void Del_second_last()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 P=ttemp->Prev;
 P->next=temp;
 temp->Prev=P;
 ttemp->next=ttemp->Prev=NULL;
 delete ttemp;
} 
void swap_FS()
{
 temp=first->next;
 ttemp=temp->next;
 ttemp->Prev=first;
 temp->next=first;
 first->next=ttemp;
 first->Prev=temp;
 temp->Prev=NULL;
 first=temp;
}
void swap_FL()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 P=first->next;
 P->Prev=temp;
 ttemp->next=first;
 temp->next=P;
 first->Prev=ttemp;
 temp->Prev=NULL;
 first->next=NULL;
 first=temp;
} 
void swap_LSL()
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 ttemp=temp->Prev;
 P=ttemp->Prev;
 P->next=temp;
 temp->Prev=P;
 temp->next=ttemp;
 ttemp->Prev=temp;
 ttemp->next=NULL;
}
  
int main()
{
 init();
 create_first();
 Add_Node();
 Add_Node();
 Add_Node();
 swap_LSL();
 cout<<endl;
 disp();
 cout<<endl;
 
 disp();
}