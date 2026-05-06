#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;
    if((a<b && b<c) || (c<b && b<<a))
        cout<< b << " is the middle element";
    else if((c<a && a<b) || (b<a && a<c))
        cout<< a <<" is the middle element";
    else 
        cout<< c <<" is the middle element";
        
    return 0;
}