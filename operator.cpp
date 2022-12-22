#include <iostream>

using namespace std;

class T
{
public:
    int a, b;

    friend T operator+(T t, T z)
    {
        T temp;
        temp.a = t.a + z.a;
        temp.b = t.b + z.b;
        return temp;
    }
    T operator<(T t)
    {
        T temp;
        if (t.a > a)
        {
            temp.a = t.a;
            temp.b = t.b;
        }
        else if (a > t.a)
        {
            temp.a = a;
            temp.b = b;
        }
        return temp;
    }
};

int main()
{
    T obj, obj1;
    obj.a = 10;
    obj.b = 20;
    obj1.a = 50;
    obj1.b = 100;
    T obj3;
    obj3 = obj < obj1;
    cout << "The value of a: " << obj3.a << " b: " << obj3.b;
    // T obj2;
    // obj2.a=30;
    // obj2.b=70;
    // T res;
    // res=obj+obj2;
    // cout<<"The resultanet value is A: "<<res.a<<" B: "<<res.b;
    return 0;
}