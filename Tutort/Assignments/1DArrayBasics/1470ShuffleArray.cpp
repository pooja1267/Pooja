#include<iostream>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) 
{
    int x = 0; 
    int y = n;
    vector<int> result;
    while(y<(2*n))
    {
        result.push_back(nums[x++]);
        result.push_back(nums[y++]);
    }
    return result;
}
int main()
{
    vector<int> n1 = {1,2,3,4,4,3,2,1};
    vector<int> res = shuffle(n1,4);
    for(auto i : res)
        cout<<i<<"\t";
    return 0;
}