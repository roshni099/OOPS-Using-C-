// WAP to demonstrate the order of call of constructors and destructors in case of multi- level inheritance.
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
class B : public A
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
class C : public B
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
int main()
{
    cout << "Multilevel" << endl;
    C ob;
}