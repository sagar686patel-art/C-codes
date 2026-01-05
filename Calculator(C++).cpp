#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two no.:";
    cin>>a>>b;
    cout<<"Entered operation:";
    char c;
    cin>>c;
    if(c='+')
        cout<<"Sum = "<<a+b;
    else if(c='-')
        cout<<"Subtraction = "<<a-b;
    else if(c='*')
        cout<<"Multiplication + "<<a*b;
    else if(c='/')
        cout<<"Division = "<<a/b;
    else
        cout<<"Invalid Input.";
}