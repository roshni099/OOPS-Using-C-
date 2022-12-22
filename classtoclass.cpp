#include<iostream>
using namespace std;
class B;
class A
{
    public:
    int a=10;
    int input()
    {
        return a;
    }
    void output()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
    operator B();
};

class B
{
    public:
    int b;
    void output()
    {
        cout<<"The value of b is: "<<b<<endl;
    }
};

A::operator B()
{
    B x;
    x.b=a;
    return x;
}

int main()
{
    A obj;
    B  obj1;
    obj1=obj;
    obj.output();
    obj1.output();
    return 0;
}