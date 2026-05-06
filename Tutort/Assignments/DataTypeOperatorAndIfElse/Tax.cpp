#include<iostream>
using namespace std;
int main()
{
    double bill;
    cout<<"Enter bill amount:";
    cin>>bill;
    double tax;
    if(bill >= 50000)
        tax = 0.1*bill;
    else
        tax = 0.05*bill;

    cout<<"Tax amount="<<tax;
    return 0;
}