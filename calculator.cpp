#include <iostream>
using namespace std;

class simple
{
public:
    float a, b;
    int n;
    simple()
    {
        cout << "\nEnter the value of a: ";
        cin >> a;
        cout << "\nEnter the value of b: ";
        cin >> b;
        while(1)
        {
            cout<<"Enter\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 to EXIT"<<endl;
            cout<<"PRESS A BUTTON: ";
            cin>>n;
            switch(n)
            {
                case 1:
                {
                    cout << "\nADDITION: " << a + b << endl;
                    break;
                }
                case 2:
                {
                    cout<<"\nSUBTRACTION: "<<a - b<<endl;
                    break;
                }
                case 3:
                {
                    cout << "\nMULTIPLICATION: " << a * b << endl;
                    break;
                }
                case 4:
                {
                    cout << "\nDIVISION: " << a / b << endl;
                    break;
                }
                case 5:
                {
                    cout<<"EXITED"<<endl;
                    return;
                }
                default:
                {
                    cout<<"\nINVALID NUMBER"<<endl;
                    break;
                }
            }
        }

    }
};

class Scientific
{
    public:
    float a, b;

    Scientific()
    {
        cout << "\nEnter the value of a: ";
        cin >> a;
        cout << "\nEnter the value of b: ";
        cin >> b;
        cout<<"\nADDITION: "<<a+b<<endl;
        cout<<"\nSUBTRACTION: "<<a-b<<endl;
        cout<<"\nMULTIPLICATION: "<<a*b<<endl;
        cout<<"\nDIVISION: "<<a/b<<endl;
    }
};

int main()
{
    simple ob1;
    Scientific ob2;
    return 0;
}