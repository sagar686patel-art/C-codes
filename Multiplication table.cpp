#include<iostream>
using namespace std;
int main()
{
    int n,i,m;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1; i<=10; i++)
    {
        m=n*i;
        cout<<n<<"x"<<i<<"="<<m<<endl;
    }
}