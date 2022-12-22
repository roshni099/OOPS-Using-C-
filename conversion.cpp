#include<iostream>
using namespace std;

class X
{
    public:
    int num;
    X(){}
    X(int a)
    {
        num=a;
    }
    void display()
    {
        cout<<"The value of n is: "<<num<<endl;
    }
};

class B
{
    int n;
    public:
    B()
    {
        n=10;
    }

    operator X()
    {
        X a;
        a.num=n;

    }
   operator int()
   {
    int x;
    x=n;
    return x;
   }
};



int main()
{
    X obj;
    int m=10;
    obj=m;
    obj.display();
    obj=50;
    obj.display();
    B obj1;
    int y=obj1;
    cout<<"The value of y is: "<<y;
    return 0;
}