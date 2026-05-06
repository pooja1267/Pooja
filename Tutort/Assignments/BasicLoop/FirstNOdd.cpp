#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int odd=1;
    cout<<"First "<<n<<" odd numbers are:";
    for(int i=1; i<=n; i++)
    {
        cout<<odd++<<"\t";
        odd++;
    }
    cout<<endl;
    return 0;
}