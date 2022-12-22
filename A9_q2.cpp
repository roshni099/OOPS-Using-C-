//WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;
template <typename t, typename u>
void display(t a,u b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    display(4,4.7);
    display(5.5,5.5);
}