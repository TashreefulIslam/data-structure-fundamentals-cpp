#include<iostream>
using namespace std;

int main()
{

    int n = 9;
    int arr[n] = {12, 15, 25, 28, 35, 45, 52, 60};
    int k = 5;
    int x = 100;

   int i = n-1;
   while(i >= k)
   {
    arr[i+1] = arr[i];
    i--;
   }

   arr[k] = x;
   cout<<"OUTPUT: ";
   for(int i = 0; i < n; i += 1)
   {
    cout<<arr[i]<<" ";
   }
}