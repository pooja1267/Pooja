#include<iostream>
using namespace std;
vector<int> getRow(int rowIndex) {
        vector<int> temp = {1};
        vector<int> res = {1};
        
        for(int i=1;i<=rowIndex;i++)
        {
            res.clear();
            res.push_back(1);
            for(int j=1;j<i;j++)
            {
                res.push_back(temp[j]+temp[j-1]);
            }
            res.push_back(1);
            temp = res;
        }
        
        return res;      
    }

int main()
{
    vector<int> res = getRow(3);
    bool first = true;
    cout<<"[";
    for(auto i:res)
    {
        if(!first)
        {
            cout<<","<<i;
        }
        else
        {
            cout<<i;
            first=false;
        }
    }
    cout<<"]"<<endl;
    return 0;
}