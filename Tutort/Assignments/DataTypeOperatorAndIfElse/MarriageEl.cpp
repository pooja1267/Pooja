#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter boy and girl age:"<<endl;
    int boy, girl;
    cin>>boy>>girl;
    if(girl>=18 && boy>=21)
        cout<<"Yes"<<endl;    
    else
        cout<<"No"<<endl;  
    return 0;
}