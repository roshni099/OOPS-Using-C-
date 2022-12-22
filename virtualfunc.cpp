#include <iostream>

using namespace std;

class base
{
public:
    int data=50;
    virtual void display()
    {
        cout << "The value of the base data is " << data<<endl;
    }
};

class derived : public base
{
    public:
    int num=100;
    void display()
    {
        cout<<"The value of base data is "<<data<<endl;
        cout<<"The value of derived data is "<<num<<endl;
    }
};

int main()
{
    base *p;
    // base obj;
    derived obj1;
    p = &obj1;
    p->display();
    return 0;
}