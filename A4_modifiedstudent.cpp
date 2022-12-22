#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int marks;
    int total_marks;
    double percentage;

    void input();
    void display();
};

void student :: input()
{
    total_marks=0;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll-number: ";
    cin>>roll;
    for(int i=1; i<=5; i++)
    {
      cout<<"Enter marks: ";
      cin>>marks;
      total_marks= total_marks+marks;
    }

    percentage = total_marks/5;

}

void student::display()
{
    cout<<"\nName: "<<name;
    cout<<"\nRoll number: "<<roll;
    cout<<"\nTotal marks: "<<total_marks;
    cout<<"\nPercenatage: "<<percentage<< "%";
}

int main()
{
    student s;
    s.input();
    s.display();

    return 0;
}