#include<iostream>
using namespace std;

template<typename T>
T func(T &x, T &y)
{
    T temp;
    // temp = x;
    // x=y;
    // y=temp;
    // cout<<"x="<<x<<" Y="<<y;
    temp = x+y;
    return temp;
}


int main()
{
    int x=10, y=20;
    int a=func<int>(x, y);
    cout<<"The added value of "<<x<<" and "<<y<<"is: "<<a;
    return 0;
}