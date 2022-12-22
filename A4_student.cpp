#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int total_marks;
    void input();
    void display();
};

void student :: input()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll-number: ";
    cin>>roll;
    cout<<"Enter total marks: ";
    cin>>total_marks;

}

void student::display()
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll number: "<<roll;
    cout<<"\nTotal marks: "<<total_marks;
}

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}