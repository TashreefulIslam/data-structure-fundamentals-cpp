#include<iostream>
using namespace std;

int main()
{

    int n = 9;
    int arr[n] = {12, 15, 25, 28, 35, 45, 52, 60, 65};
    int k = 5;
    

   int i = k;
   while(i < n)
   {
    arr[i] = arr[i+1];
    i++;
   }

   cout<<"OUTPUT: ";
   for(int i = 0; i < n; i += 1)
   {
    cout<<arr[i]<<" ";
   }
}