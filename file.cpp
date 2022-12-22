#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   string s1="Love You";
   string s2;
   ofstream out("sample.txt");
   out<<s1;

   ifstream in("sample1.txt");
   //in>>s2;
   getline(in,s2);
   cout<<s2;
   out.close();
   in.close();
   return 0;
}