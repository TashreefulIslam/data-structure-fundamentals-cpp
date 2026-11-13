#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 10, 5, 12};

    int large = arr[0];

    for(int i = 1; i < 5; i += 1)
    {
        if(arr[i] > large)
        large = arr[i];
    }

    cout<<"Largest value: "<<large;
}