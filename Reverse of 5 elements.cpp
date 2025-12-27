#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    cout<<"Enter five numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<5; i++)
    {
        b[i]=a[4-i];
    }
    cout<<"Reverse of all elements: ";
    for(int i=0; i<5; i++)
    {
        cout<<"\n"<<b[i];
    }
}