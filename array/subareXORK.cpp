#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE
// int subArrXORk(vector<int> &arr,int x)
// {
//     int cnt=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i; j < arr.size(); j++)
//         {
//             int XOR=0;
//             for(int k=i;k<=j;k++){
//                 XOR=XOR^arr[k];
//             }
//             if(XOR==x) cnt++;

//         }
//     }
//     return  cnt;

// }
// better
// int subArrXORk(vector<int> &arr, int x)
// {
//     int cnt = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int XOR = 0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             XOR = XOR ^ arr[j];
//             if (XOR == x)
//             cnt++;
//         }
//     }
//     return cnt;
// }
//optimal
int subArrXORk(vector<int> &arr, int x)
{
    int cnt = 0;
    unordered_map<int,int> mpp;
    int xr=0;
     mpp[xr]++;
    for (int i = 0; i < arr.size(); i++)
    {
        xr=xr^arr[i];
        int uptox=xr^x;
        if(mpp.find(xr^x)!=mpp.end()) cnt+=mpp[uptox];
        mpp[xr]++;
        
    }
    return cnt;
}

int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    int result = subArrXORk(arr, k);
    cout << result << endl;
}