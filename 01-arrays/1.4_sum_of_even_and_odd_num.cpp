#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 10, 5, 12};

   int sum_even = 0;
   int sum_odd = 0;
    for(int i = 0; i < 5; i += 1)

    {
        if(arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }else{
            sum_odd += arr[i];
        }
    }

    cout<<"sum of even: "<<sum_even<<endl<<"sum of odd: "<<sum_odd<<endl;
}