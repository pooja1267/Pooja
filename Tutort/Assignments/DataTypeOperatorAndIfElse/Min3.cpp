#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a>>b>>c;
    int res = (a<b?a:b)<c ? (a<b?a:b) : c;
    cout<<"Minimum is :" << res<<endl;
    return 0;

}