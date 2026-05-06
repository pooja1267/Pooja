#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int digitSum(int num)
{
    int sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int differenceOfSum(vector<int>& nums) 
{
    int digitsSum=0;
    int sum=0;
    for(auto i:nums)
    {
        digitsSum+=digitSum(i);
        sum+=i;
    }
    return abs(sum-digitsSum);
}
int main()
{
    vector<int> n = {1,2,3,4};
    cout<<differenceOfSum(n)<<endl;
    return 0;
}