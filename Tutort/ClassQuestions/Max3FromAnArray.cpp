#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,8,8,1,6,7,4};
    int first=0, second=0, third=0;
    for(auto i:arr)
    {
        if(i>first)
        {
            third=second;
            second=first;
            first=i;
        }
        else if(i>second && i!=first)
        {
            third=second;
            second=i;
        }
        else if(i>third && i!=second && i!=first)
        {
            third=i;
        }
        

    }

    cout<<first<<"\t"<<second<<"\t"<<third<<endl;
    return 0;
}
