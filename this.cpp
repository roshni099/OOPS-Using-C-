#include<iostream>
using namespace std;

class A
{
    int a;
    float b;
    public:
    void setdata(int a, float b)
    {
        this->a=a;
        this->b=b;
    }
    void getdata()
    {
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};

class B
{
    int a;
    float b;
    public:
    B& setdata(int a, float b)
    {
        this->a=a;
        this->b=b;
        return *this;
    }
    void getdata()
    {
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }

};

int main()
{
    A obj;
    obj.setdata(10.8, 50);
    obj.getdata();
    B obj1;
    //obj1.setdata(20, 30.7).getdata();
    obj1.getdata();
    return 0;
}