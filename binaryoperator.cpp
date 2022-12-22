#include <iostream>
using namespace std;

class number
{
public:
    int a;
    int b;
    int c;
    number(){}
    number(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }

    void display()
    {
        cout << "\nThe value of a is: " << a << endl;
        cout << "\nThe value of b is: " << b << endl;
        cout << "\nThe value of c is: " << c << endl;
    }

    number operator+(number x)
    {
        number R;
        R.a = a + x.a;
        R.b = b + x.b;
        R.c = c + x.c;
        return R;
    }
};

int main()
{
    int a, b, c;
    cout << "\nEnter the value of a: ";
    cin >> a;
    cout << "\nEnter the value of b: ";
    cin >> b;
    cout << "\nEnter the value of c: ";
    cin >> c;
    number A(a, b, c);
    cout << "\nEnter the value of a: ";
    cin >> a;
    cout << "\nEnter the value of b: ";
    cin >> b;
    cout << "\nEnter the value of c: ";
    cin >> c;
    number B(a, b, c);
    A.display();
    B.display();
    number C = A + B;
    C.display();
    return 0;
}