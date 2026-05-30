#include<iostream>
#include<unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        unordered_set<int> setOfNums1;
        vector<int> result;
        for(auto i : nums1)
            setOfNums1.insert(i);

        for(auto i : nums2)
        {
            if(setOfNums1.find(i)!=setOfNums1.end())
            {
                auto itr = find(result.begin(), result.end(), i);
                if(itr == result.end())
                    result.push_back(i);
            }
        }

        return result;
        
        
    }
int main()
{
    vector<int> n1 = {4,9,5}, n2 = {9,4,9,8,4};
    vector<int> res;
    res = intersection(n1,n2);
    for(auto i : res)
        cout<<i<<"\t";

    cout<<endl;
    return 0;

}