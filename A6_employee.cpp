#include <iostream>

using namespace std;

class Employee
{
 public:
    char name[20];
    int id;
    double salary;

    void getdetails()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your id: ";
        cin>>id;
    }

    void displaydetails()
    {
        cout<<endl<<endl<<"ENTERED DETAILS:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
    }


};

class Regular : public Employee
{
private:
    double DA;
    double HRA;
    double basic_salary;

public:
    Regular(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }
    void display()
    {
        cout << "\nSalary of the Regular employee is " << (DA + HRA + basic_salary);
    }
};

class PartTime : public Employee
{
private:
    int hours;
    double pay;

public:
    PartTime(int n, double p)
    {
        hours = n;
        pay = p;
    }
    void display()
    {
        cout << "\nSalary of the part-time employee is " << (hours * pay);
    }
};

int main()
{
    Employee emp;
    emp.getdetails();
    float salary, da, hra, hour, pay;
    cout<<"Enter your basic salary, DA and HRA: ";
    cin>>salary>>da>>hra;
    cout<<"Enter your total number of hours and pay per hour: ";
    cin>>hour>>pay;

    emp.displaydetails();
    Regular r(da, hra, salary);
    r.display();

    PartTime p(hour, pay);
    p.display();

    return 0;
}