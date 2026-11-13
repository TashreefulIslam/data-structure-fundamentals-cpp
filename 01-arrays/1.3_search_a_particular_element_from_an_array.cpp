#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 10, 5, 12};

    int x = 162; //find 5 from the array with its index number
    int location = 0;
    int flag = 0;

    for(int i = 0; i < 5; i += 1)
    {
       if(arr[i] == x)
       {
        location = i;
        flag = 1;
        break;
       }
    }

    if(flag == 1)
    {
        cout<<"Found at index = "<<location<<endl;
    }else
    {
        cout<<"Not Found\n";
    }

    
}