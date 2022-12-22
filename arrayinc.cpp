#include <iostream>

using namespace std;

class student
{
    int weight[100];
    int age[100];
    int counter;

public:
    void count(void)
    {
        counter = 0;
    }

    void get_data(void);
    void display_data(void);
};

void student ::get_data(void)
{
    cout <<"\nEnter the weight of " <<counter + 1<< " student: ";
    cin >>weight[counter];
    cout<<"\nEnter the age of "<<counter+1<<" student: ";
    cin>>age[counter];
    counter++;
}

void student ::display_data(void)
{
    cout<<"\n\nGiven details:"<<endl;
    for (int i=0;i<counter;i++)
    {
        cout<<"\nAge and weight of the "<<i+1<<"student is "<<age[i]<<" and "<<weight[i];
    }
}

int main()
{
    student s;
    int n;
    cout<<"Enter the total number of students: ";
    cin>>n;
    s.count();
    for (int i=0;i<n;i++)
    {
        s.get_data();
    }
    s.display_data();
    return 0;
}