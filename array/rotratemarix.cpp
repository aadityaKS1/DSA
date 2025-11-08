#include<bits/stdc++.h>
using namespace std;

//brute force
// vector <vector<int>> rotateMatrix(vector<vector<int>> &matrix,int n, int m){

//     vector<vector<int>> ansMatrix(m,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//                 ansMatrix[j][n-1-i]=matrix[i][j];
//         }
//     }
//     return ansMatrix;

// }
//optimal
vector <vector<int>> rotateMatrix(vector<vector<int>> &matrix,int n, int m){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    return matrix;

}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3,4}, {5, 6, 7,8}, {9, 10, 11,12},{13,14,15,16}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> result = rotateMatrix(matrix, n, m);
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