#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; //input array size
    int arr[n]; //declaration of array
    for(int i = 0; i < n; i += 1)
    {
        cin>>arr[i]; //input to array
    }

    //how to print array using loop
    for(int i = 0; i < n; i += 1)
    {
        cout<<arr[i]<<" "; 
    }
    
}