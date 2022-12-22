//WAP to find sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;
#define N 10

template <typename T>
void sort(T arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int int_array[N];
    float float_array[N];
    cout<<"Enter the size of integer array <=10: ";
    int sizei;
    cin>>sizei;
    cout << "Enter integer array elements:" << endl;
    for (int i = 0; i < sizei; i++){
        cin >> int_array[i];
    }
    cout<<"Enter the size of floating array <=10: ";
    int sizef;
    cin>>sizef;
    cout << "Enter floating array elements:" << endl;
    for (int i = 0; i < sizef; i++){
        cin >> float_array[i];
    }
    sort(int_array, sizei);
    sort(float_array, sizef);
    cout << "After sorting they are :" << endl;
    for (int i = 0; i < sizei; i++){
        cout << int_array[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < sizef; i++){
        cout << float_array[i] << ", ";
    }
    cout<<endl;
    return 0;
}