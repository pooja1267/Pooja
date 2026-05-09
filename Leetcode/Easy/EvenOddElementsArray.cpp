#include<iostream>
using namespace std;
int main()
{
    int arr[] = {30,40,80,90,12,15,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    int even=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            even++;
    }
    cout<<"Even="<<even<<", odd="<<(size-even)<<endl;
    return 0;
}