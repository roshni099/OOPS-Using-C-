#include <iostream>
using namespace std;

class Employee
{
public:
    string s;
    int id;
    int count = 1, r;
    Employee()
    {
        cout<<"Base class constructor called."<<endl;
        
        /*cout << count<< " Data Entry: \n";
        cout << "\nName: ";
        cin >> s;
        cout << "\nId: ";
        cin >> id;
        r = count;
        count++;*/
    }
    void displaydetails()
    {
        cout<<count-r<<" Empoyee's Data:\n";
        cout<<"\nName: "<<s<<endl;
        cout<<"\nId: "<<id<<endl;
        r--;
    }
};

class Next : public Employee
{
public:
    int hour, pph;
    int i = 0, j;
    Next()
    {
        cout<<"Derived class constructor called."<<endl;
        /*cout << i + 1 << " Data Entry: \n";
        cout << "Name: ";
        cin >> s;
        cout << "Id: ";
        cin >> id;
        cout << "Enter the no. of hours and pay per hour: ";
        cin >> hour >> pph;
        j=i;
        i++;*/
    }

    void displaydetails()
    {
        cout<<i-j<<" Empoyee's Data:\n";
        cout<<"\nName: "<<s<<endl;
        cout<<"\nId: "<<id<<endl;
        cout<<"\nSaalary: "<<hour*pph<<endl;
        j--;
    }
};

class Doublenext: public Next
{
    public:
    Doublenext()
    {
        cout<<"Double derived class."<<endl;
    }
};

int main()
{
    Employee E;
    Next o1;
    Doublenext t;
    return 0;

}