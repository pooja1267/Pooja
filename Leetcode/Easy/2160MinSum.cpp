#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int num;
    cout<<"Enter 4 digit num:"<<endl;
    cin>>num;
    vector<int> digits;
    while(num)
    {
        int rem=num%10;
        digits.push_back(rem);
        num/=10;
    }
    sort(digits.begin(), digits.end());
    int sum = (digits[0] + digits[1])*10+(digits[2]+digits[3]);
    cout<<sum<<endl;
    return 0;
}