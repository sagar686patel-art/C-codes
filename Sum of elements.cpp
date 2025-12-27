#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum=0,i,j;
    for( i=1; i<=10; i++)
    {
        cout<<"Enter element no."<<i<<":"<<endl;
        cin>>a[i];
    }
    for( j=1; j<=10; j++)
    {
        sum=sum+a[j];
    }
    cout<<"Addition of elements: "<<sum;
}