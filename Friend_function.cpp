#include <iostream>
using namespace std;

class B; // forward declaration
class A
{
    int x;
public:
    A() { x = 20; }

    void disp(B &obj);  // pass by reference
    friend class B;
};

class B
{
    int y;
public:
    B() { y = 10; }

    void disp1(A &obj1);  // pass by reference
    friend class A;
};

void A::disp(B &obj)
{
    cout << "Value : " << obj.y << endl;
}

void B::disp1(A &obj1)
{
    cout << "Value : " << obj1.x << endl;
}

int main()
{
    A a;
    B b;
    a.disp(b);
    b.disp1(a);
}