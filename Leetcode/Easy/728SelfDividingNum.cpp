#include<iostream>
using namespace std;
bool isSelfDividing(int num)
{
    int n=num;
    while(num)
    {
        int rem=num%10;
        if(!rem || n%rem)
            return false;
        num=num/10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) 
{
    vector<int> numbers;
    for(int i=left; i<=right; i++)
        if(isSelfDividing(i))
            numbers.push_back(i);
    return numbers;
}

int main()
{
    int left,right;
    cout<<"Enter left and right";
    cin>>left>>right;
    vector<int> v = selfDividingNumbers(left, right);
    for(auto i:v)
        cout<<i<<" ";

    cout<<endl;
    return 0;
}