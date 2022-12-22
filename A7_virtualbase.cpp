// WAP to demonstrate the order of call of constructors and destructors in case of virtual base class .
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A Constructor called" << endl;
    }
    ~A()
    {
        cout << "A Destructor called" << endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "B Constructor called" << endl;
    }
    ~B()
    {
        cout << "B Destructor called" << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "C Constructor called" << endl;
    }
    ~C()
    {
        cout << "C Destructor called" << endl;
    }
};
class D : public C, public B
{
public:
    D()
    {
        cout << "D Constructor called" << endl;
    }
    ~D()
    {
        cout << "D Destructor called" << endl;
    }
};
int main()
{
    cout << "Virtual Base Class" << endl;
    D ob;
}