/*Create a class which allocates the memory for a string through dynamic constructor.
Overload the binary + to concatenate two strings and display it.*/
#include <iostream>
#include <cstring>
using namespace std;
class Dynamic
{
    char *p;
    int len;

public:
    Dynamic(){};
    Dynamic(const char *str)
    {
        len = strlen(str);
        p = new char[len + 1];
        strcpy(p, str);
    }
    Dynamic operator+(Dynamic ob)
    {
        Dynamic cc;
        cc.len = len + ob.len;
        cc.p = new char[cc.len + 1];
        strcpy(cc.p, p);
        strcat(cc.p, ob.p);
        return cc;
    }
    void display()
    {
        cout << "String = " << p << endl;
    }
};
int main()
{
    Dynamic str1("Hello, ");
    Dynamic str2("World!");
    Dynamic str3 = str1 + str2;
    str1.display();
    str2.display();
    str3.display();
    return 0;
}