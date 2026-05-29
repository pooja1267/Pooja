#include<iostream>
using namespace std;
 vector<int> getRow(int numRows) 
 {
    vector<vector<int>> res;
    res.push_back({1});
    for(int i = 1; i<=numRows; i++)
    {
        vector<int> row (i+1,0);
        res.push_back(row);
        res[i][0] = 1;
             
        for(int j = 1; j<i; j++)
        {
            res[i][j] = res[i-1][j]+res[i-1][j-1];
        }
        res[i][i] = 1;
    }
    return res[numRows];
}        

int main()
{
    vector<int> r = getRow(1);
    
        for(auto j: r)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    
    return 0;
}
