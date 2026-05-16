#include<iostream>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp = {1};
        res.push_back(temp);

        for(int i=1; i<numRows;i++)
        {
            temp.clear();
            temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                temp.push_back(res[i-1][j-1] + res[i-1][j]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;        
    }

int main()
{
    vector<vector<int>> res = generate(5);
    cout<<"[";
    for(auto i : res)
    {
        bool first=true;
        cout<<"[";
        for(auto j:i)
        {
            if(!first)
                cout<<","<<j;
            else
            {
                 cout<<j;
                 first=false;
            }
        }
        cout<<"],";
    }
    cout<<"]"<<endl;
    return 0;
}