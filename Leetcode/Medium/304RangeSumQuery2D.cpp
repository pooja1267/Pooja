#include<iostream>
using namespace std;
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
            int m = matrix.size()+1;
            int n = matrix[0].size()+1;
            vector<vector<int>> sums (m,vector<int>(n,0));
            
            for(int i=1; i<m; i++)
            {
            for(int j=1; j<n; j++)
            {
                sums[i][j] = sums[i][j-1] + sums[i-1][j] - sums[i-1][j-1] + matrix[i-1][j-1];
            }
        }
        regionSums = sums;
        }
    
    void printPrefixSumRowsMatrix()
    {
        for(auto i : regionSums)
        {
            for(auto j : i)
            {
                cout<<j<<"\t";
            }
            cout<<endl;
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int r1Area = regionSums[row2+1][col2+1];
        int r2Area = regionSums[row1][col1];
        int r3Area = regionSums[row1][col2+1];
        int r4Area = regionSums[row2+1][col1];
        return r1Area+r2Area-r3Area-r4Area;
    }
    private : 
       vector<vector<int>> regionSums;
};

int main()
{
    vector<vector<int>> nums = {{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
    NumMatrix *numMatrix = new NumMatrix(nums);
    numMatrix->printPrefixSumRowsMatrix();
    cout<<numMatrix->sumRegion(2,1,4,3)<<endl;
    cout<<numMatrix->sumRegion(1,1,2,2)<<endl;
    cout<<numMatrix->sumRegion(1,2,2,4)<<endl;
    return 0;
}