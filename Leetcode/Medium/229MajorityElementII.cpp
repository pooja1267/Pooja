#include<iostream>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int c1=INT_MIN, c2=INT_MIN, v1=0,v2=0;
        vector<int> res;
        for(auto i : nums)
        {

            if( i == c1)
                v1++;
            else if( i == c2)
                v2++;
            else if(v1 == 0)
            {
                c1=i;
                v1=1;
            }
            else if(v2==0)
            {
                c2=i;
                v2=1;
            }
            else
            {
                
                    v1--;
                    if(v1==0)
                        c1 = INT_MIN;
                
                    v2--;
                    if(v2==0)
                        c2 = INT_MIN;
                
            }
        }

        cout<<"c1="<<c1<<"\t"<<"c2="<<c2<<endl;

        int c1Count=0, c2Count=0;
        for(auto i : nums)
        {
            if(i == c1)
                c1Count++;
            else if(i == c2)
                c2Count++;
        }

        int threshold = nums.size()/3;
        cout<<"threshold="<<threshold<<"c1Count="<<c1Count<<", c2Count="<<c2Count<<endl;
        if( c1 != INT_MIN && c1Count > (threshold))
            res.push_back(c1);

        if( c2 != INT_MIN && c2Count > threshold)
            res.push_back(c2);

        return res;
    }

int main()
{
    vector<int> num = {2,1,1,3,1,4,5,6};
    vector<int> result = majorityElement(num);
    for(auto i : result)
        cout<<i<<"\t";
    return 0;
}