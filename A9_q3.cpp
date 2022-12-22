//Rewrite program i. using class template
//WAP to find sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;
#define N 10
template <class T>
class a{
    T arr[N];
    int size;
    public:
    void input(){
        cout<<"Enter size: ";
        cin>>size;
        cout<<"Enter elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void sort(){
        for (int i = 0; i < size; i++){
            for (int j = i + 1; j < size; j++){
                if (arr[i] > arr[j]){
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }
        }
    }
    void display(){
        cout<<"After sorting"<<endl;
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    a<int>ob;
    a<float>ob1;
    ob.input();
    ob1.input();
    ob.sort();
    ob1.sort();
    ob.display();
    ob1.display();

}