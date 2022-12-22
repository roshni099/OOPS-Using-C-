#include<iostream>
using namespace std;
class shape
{
  public:
  void area();
};

class circle : public shape
{
    float r;
    public:
    void area()
    {
        cout<< "Enter Radius :";
        cin >> r;
        cout<<"Area of Circle :"<< 3.14*r*r<<endl;
    }
};

class rectangle : public shape
{
    int l,b;
    public:
    void area()
    {
        cout<<"Enter Length and Breath :";
        cin>>l>>b;
        cout<<"Area of Rectancle :"<< l*b<<endl;
    }
};

class triangle : public shape
{
  float b,h;
  public:
  void area()
  {
    cout<<"Enter Base and Height :";
    cin>>b>>h;
    cout<<"Area of Triangle :"<< 0.5*b*h<<endl;
  }
};

int main()
{  
   circle c;
   c.area();
   rectangle r;
   r.area();
   triangle t;
   t.area();
  
    return 0;
}