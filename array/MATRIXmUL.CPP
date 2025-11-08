#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> inputMatrix(int rows, int col)
{
    vector<vector<int>> mat(rows, vector<int>(col));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <col; j++)
        {
             cout<<"Enter the element at index "<<"["<<i+1<<"]"<<"["<<j+1<<"] : ";
            cin >> mat[i][j];
        }
    }
    return mat;
}
void printMatrix(vector<vector<int>> matrix)
{
    cout<<"Outptu matrix is :"<<endl;
    for (auto row : matrix)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> matrixMul(vector<vector<int>> mat1,vector<vector<int>> mat2){
    int row1=mat1.size();
    int col1=mat1[0].size();
    int row2=mat2.size();
    int col2=mat2[0].size();
    
    vector<vector<int>> Multiplied( row1,vector<int>(col2));
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            Multiplied[i][j]=0;
            for(int k=0;k<col1;k++){
                Multiplied[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    return Multiplied;
}

int main()
{
    int rows = 2;
    int col = 2;
    cout<<"Enter the first Matrix :"<<endl;
    vector<vector<int>> matrix1 = inputMatrix(rows, col);
    printMatrix(matrix1);
    cout<<"Enter the Second Matrix :"<<endl;
    vector<vector<int>> matrix2 = inputMatrix(rows, col);
    printMatrix(matrix2);

    cout<<"The Mulitplied ";
    vector<vector<int>>mul=matrixMul(matrix1,matrix2);
    printMatrix(mul);
}