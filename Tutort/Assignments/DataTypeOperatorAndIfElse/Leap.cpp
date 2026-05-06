#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;
    bool leap;
    if(year%4 != 0)
        leap = false;
    else if(year%100 == 0)
    {
        if(year%400 != 0)
            leap = false;
        else
            leap = true;
    }
    else
        leap = true;

    if(leap)
        cout<<" It is a leap year";
    else
        cout<<" It is NOT a leap year";

    return 0;
}