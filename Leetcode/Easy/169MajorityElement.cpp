#include<iostream>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int c = -1, v=0;
    for(auto i : nums)
    {
        if(v==0)
        {
            c = i;
            v = 1;
        }
        else if(i == c)
            v++;
        else 
            v--;
    }
    int count = 0;
    for(auto i : nums)
        if(i == c)
            count++;

    if(count> (nums.size()/2))
        return c;
    
    return 0;
}

int main()
{
    vector<int> num = {2,2,1,1,1,2,2};
    cout<<majorityElement(num);
    return 0;
}