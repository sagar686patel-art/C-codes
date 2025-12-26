#include<iostream>
using namespace std;
int main()
{  
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int a[x];
    int sum=0,i,j;
    for( i=1; i<=x; i++)
    {
        cout<<"Enter element no."<<i<<":"<<endl;
        cin>>a[i];
    }
    for( j=1; j<=x; j++)
    {
        sum=sum+a[j];
    }
    cout<<"Addition of elements: "<<sum;
}