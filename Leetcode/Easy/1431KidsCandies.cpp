#include<iostream>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max = INT_MIN;
        for (auto i : candies) {
            if (i > max)
                max = i;
        }
        int min = max - extraCandies;
        vector<bool> result;
        for (auto i : candies) {
            if (i >= min)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
int main()
{
    vector<int> candies = {2,3,5,1,3};
    int extra = 3;
    vector<bool> res = kidsWithCandies(candies, extra);
    for(auto i : res)
        cout<<i<<"\t";

    cout<<endl;
    return 0;

}