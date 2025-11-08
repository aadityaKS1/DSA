#include <bits/stdc++.h>
using namespace std;
// bruteforce
//  void setRow(vector<vector<int>> &matrix,int n,int m,int i){
//       for(int j=0;j<m;j++){
//          if(matrix[i][j]!=0){
//              matrix[i][j]=-1;
//          }
//      }
//  }
//  void setCol(vector<vector<int>>& matrix,int n,int m,int j){
//       for(int i=0;i<n;i++){
//          if(matrix[i][j]!=0){
//              matrix[i][j]=-1;
//          }
//      }
//  }
//  vector<vector<int>> setMatrix0(vector<vector<int>>& matrix,int n,int m){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 setRow(matrix,n,m ,i);
//                 setCol(matrix,n,m,j);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==-1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     return matrix;

// }
// better
// vector<vector<int>> setMatrix0(vector<vector<int>>& matrix,int n,int m){
//     vector<int> row(n,0);
//     vector<int> col(m,0);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//         }
//     }
// }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(row[i] || col[j]){
//                 matrix[i][j]=0;
//             }
//         }
//     }

//     return matrix;

// }
// optimized
vector<vector<int>> setMatrix0(vector<vector<int>> &matrix, int n, int m)
{
    // vector<int> row(n,0);//.> matrix[0][...]
    // vector<int> col(m,0);//-> matrix[...][0]
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // martk ithe ith row and jth columhn
                matrix[i][0] = 0;
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            { // it checks which 1 element is convemeted to 0
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
            matrix[0][j] = 0;
    } 
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
            matrix[i][0] = 0;
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 0}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> result = setMatrix0(matrix, n, m);
    for (auto it : result)
    {
        for (auto el : it)
        {
            cout << el << " ";
        }
        cout << "\n";
    }

    return 0;
}