#include<iostream>
#include<string.h>

using namespace std;

class String
{
    public:
      char str[50];
    
    public:
       
       void get_data()
       {
          cout<<"Enter the string: ";
          cin>>str;
       }
       void display_data()
       {
          cout<<str;
       }

       String operator+(String a)
       {
          String s;
          strcat(str,a.str);
          strcpy(s.str,str);
          return s;
       }
};

int main()
{
    String str1, str2, str3;
    str1.get_data();
    str2.get_data();

    cout<<"\nFirst string: ";
    str1.display_data();

    cout<<"\nSecond string: ";
    str2.display_data();

    str3 = str1 + str2;

    cout<<"\nConcatenated string is: ";
    str3.display_data();

    return 0;
}