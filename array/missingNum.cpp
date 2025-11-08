#include <bits/stdc++.h>
using namespace std;
// int  findNum(int arr[], int n, int N)//brute force
// {
//     for (int i = 1; i <= N; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == i)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found == false)
//         {
//             return i;
//         }
//     }


// }
int findNum(int arr[],int n,int N){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0) return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int N = 5;
    int result=findNum(arr,n,N);
    cout<<result;
}