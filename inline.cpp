#include<iostream>

using namespace std;

inline int func(int x, int y)
{
    int temp;
    temp = x+y;
    return temp;
}

int main()
{
    int x=10, y=50;
    int a=func(x, y);
    cout<<"Addition of "<<x<<" and "<<y<<" is : "<<a;
}