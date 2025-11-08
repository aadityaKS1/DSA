#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE
// int longSubArrCnt(vector<int> &arr)
// {
//     int maxLen = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             sum = sum + arr[j];
//             if(sum==0){
//                 maxLen = max(j-i+1,maxLen);
//             } 
                
//         }
//     }
//     return  maxLen;

// }
//better/optimal
int longSubArrCnt(vector<int> &arr)
{
    int maxLen = 0;
    unordered_map<int,int> mp;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        if(sum==0) maxLen =i+1;
        else if(mp.find(sum)!=mp.end()) maxLen=max(maxLen,i-mp[sum]);
        else mp[sum]=i;
    }
    return  maxLen;

}

int main()
{
    vector<int> arr ={9, -3, 3, -1, 6, -5};
    int result = longSubArrCnt(arr);
    cout<<result<<endl;
}