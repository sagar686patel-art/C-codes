#include<stdio.h>
#include<iostream>
using namespace std;
#define max 5
struct Stack
{
 int data[max];
 int top;
};

Stack S,*P;

void init()
{
 P = &S;
 P->top = -1;
}

int Empty()
{
 if(P->top == -1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

int Full()
{
 if(P->top == max-1)
 {
  return 1;
 }
 else
 {
  return 0;
 }
} 

void Push(int x)
{
 if(Full()) return;
 P->top++;
 P->data[P->top] = x;
}

int Pop()
{
 int x;
 if(Empty()) return 0;
 x = P->data[P->top];
 P->top--;
 return x;
}

int main()
{
 init();
 Push(10);
 Push(20);
 Push(30);
 cout<<Pop()<<endl<<Pop()<<endl<<Pop();
}   