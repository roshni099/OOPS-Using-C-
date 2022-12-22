#include <iostream>

using namespace std;

class space
{
public:
    int x;
    int y;
    int z;
    space()
    {
        cout << "\nEnter the value of x: ";
        cin >> x;
        cout << "\nEnter the value of y: ";
        cin >> y;
        cout << "\nEnter the value of z: ";
        cin >> z;
    }
    void display()
    {
        cout << "\nThe value of x is : " << x << endl;
        cout << "\nThe value of y is : " << y << endl;
        cout << "\nThe value of z is : " << z << endl;
    }
    void operator ++()
    {
        x = ++x;
        y = ++y;
        z = ++z;
    }
};


int main()
{
    space s;
    s.display();
    ++s;
    s.display();
    return 0;
}