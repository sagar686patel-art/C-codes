#include<stdio.h>
#include<iostream>
using namespace std;
struct DCLL
{
 int data;
 DCLL *next,*Prev;
};
DCLL *first,*temp,*ttemp,*P;
void init() 
{
 first=temp=ttemp=P=NULL;
} 
void create_first()
{
 first = new DCLL;
 cin>>first->data;
 first->next = first;
 first->Prev=first;
}
void Add_Node()
{
 temp=first->Prev;
 ttemp = new DCLL;
 cin>>ttemp->data;
 ttemp->Prev=temp;
 ttemp->next=first;
 temp->next=ttemp;
 first->Prev=ttemp;
}
void Add_Before_first()
{
 temp=first->Prev;
 ttemp = new DCLL;
 cin>>ttemp->data;
 ttemp->Prev=temp;
 ttemp->next=first;
 first=ttemp;
 temp->next=ttemp;
} 
void Del_first()
{
 temp=first->Prev;
 ttemp=first;
 first=first->next;
 temp->next=first;
 ttemp->next=ttemp->Prev=NULL;
 delete ttemp;
}
void Del_last()
{
 temp=first->Prev;
 ttemp=temp->Prev;
 ttemp->next=first;
 first->Prev=ttemp;
 temp->Prev=temp->next=NULL;
 delete temp;
}  
void swap_FS()
{
 temp=first->Prev;
 ttemp=first->next;
 P=ttemp->next;
 temp->next=ttemp;
 first->next=P;
 P->Prev=first;
 first->Prev=ttemp;
 ttemp->next=first;
 ttemp->Prev=temp;
 first=ttemp;
}
void swap_FL()
{
 temp=first->Prev;
 ttemp=temp->Prev;
 P=first->next;
 P->Prev=temp;
 ttemp->next=first;
 temp->next=P;
 temp->Prev=first;
 first->next=temp;
 first->Prev=ttemp;
 first=temp;
}
void swap_LSL()
{
 temp=first->Prev;
 ttemp=temp->Prev;
 P=ttemp->Prev;
 first->Prev=ttemp;
 P->next=temp;
 temp->Prev=P;
 temp->next=ttemp;
 ttemp->Prev=temp;
 ttemp->next=first;
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
 Del_last();
 disp();
}