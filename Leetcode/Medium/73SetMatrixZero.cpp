#include<iostream>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstRowZero = false, firstColumnZero = false;
        for(int i = 0; i<m;i++)
            if(matrix[i][0] == 0)
                firstColumnZero = true;

        for(int i=0; i<n; i++)
            if(matrix[0][i] == 0)
                firstRowZero = true;


        for(int i =1; i<m; i++)
            for(int j=1; j<n; j++)
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }

 
        for(int i = 1; i<m;i++)
        {
            if(matrix[i][0] == 0)
            {
                for(int j = 1; j<n;j++)
                    matrix[i][j] = 0;
            }
        }

        for(int i =1; i<n;i++)
        {
            if(matrix[0][i]==0)
            {
                for(int j=1;j<m;j++)
                    matrix[j][i] = 0;
            }
        }

        if(firstRowZero)
        {
            for(int i =0; i<n;i++)
                matrix[0][i] = 0;
        }

        if(firstColumnZero)
        {
            for(int i = 0; i<m;i++)
                matrix[i][0]=0;
        }
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
    vector<vector<int>> vec = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(vec);
    printMatrix(vec);
    return 0;

}