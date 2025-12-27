#include<iostream>
using namespace std;
int main()
{
 int a[5],s=0;
 cout<<"Enter five numbers: ";
 for(int i=0;i<5;i++)
 {
  cin>>a[i];
 }
 for(int i=0;i<5;i++)
 {
  s=s+a[i];
 }
 cout<<"Sum of all elements: "<<s;
 }  