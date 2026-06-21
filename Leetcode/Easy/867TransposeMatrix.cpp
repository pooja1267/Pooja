#include<iostream>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>> ans(c, vector<int>(r,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0; j<c;j++)
                ans[j][i] = matrix[i][j];
        }
        return ans;
    }
void printMatrix(vector<vector<int>> m)
{
    for(int i=0; i<m.size(); i++){
        for(int j=0; j< m[i].size(); j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix2= {{1,2,3},{4,5,6}};
    vector<vector<int>> ans = transpose(matrix1);
    printMatrix(ans);
    ans = transpose(matrix2);
    printMatrix(ans);
    return 0;
}