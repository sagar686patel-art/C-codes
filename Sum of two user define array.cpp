#include<iostream>
using namespace std;
int main()
{
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int a[x],b[x],c[x];
    int sum;
    cout<<"Enter first aray."<<endl;
    for(int i=1; i<=x; i++)
    {
        cout<<"Enter element no."<<i<<":"<<endl;
        cin>>a[i];
    }
    cout<<"Enter second aray."<<endl;
    for(int j=1; j<=x; j++)
    {
        cout<<"Enter element no."<<j<<":"<<endl;
        cin>>b[j];
    }
    for(int i=1; i<=x; i++)
    {
        c[i]=a[i]+b[i];
    }
    for(int j=1; j<=x; j++)
    {
        cout<<"Sum of element no."<<j<<" is "<<c[j]<<endl;
    }
}