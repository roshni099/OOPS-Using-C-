#include<iostream>

using namespace std;

class movie
{
    public:
    string title;
    float rate;
    movie ()
    {
        cout <<"\nEnter the TITLE: ";
        cin>>title;
        cout<<"\nEnter the Ratings: ";
        cin>>rate;
    }
    virtual void displaydata()=0;
    /*{
        cout<<"\nThe title of the movie is: "<<title<<endl;
        cout<<"\nThe ratings of the movie out of 10 is "<<rate<<endl;
    }*/
};

class video: public movie
{
    public:
    int len;
    video ()
    {
        cout<<"Enter the lenght of the video: ";
        cin>>len;
    }
    void displaydata()
    {
        cout<<endl<<endl;
        cout<<"The title of the movie is "<<title<<endl;
        cout<<"The ratings of the movie is "<<rate<<endl;
        cout<<"The length of the movie is "<<len;
    }

};

class text: public movie
{
    public:
    int num;
    text():movie()
    {
        cout<<"\nEnter the total number of words: ";
        cin>>num;
    }
    void displaydata()
    {
        cout<<endl<<endl;
        cout<<"The title of the movie is "<<title<<endl;
        cout<<"The ratings of the movie is "<<rate<<endl;
        cout<<"The total number of words is "<<num<<endl;
    }
};

int main()
{
    video obj;
    text obj1;
    movie* arr[2];
    arr[0]=&obj;
    arr[1]=&obj1;
    arr[0]->displaydata();
    arr[1]->displaydata(); 
    return 0;
}