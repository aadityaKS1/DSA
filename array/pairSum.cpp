#include <bits/stdc++.h>
using namespace std;
// brute force
//  string pairSum(vector<int> arr,int k){
//      int n =arr.size();
//      for(int i=0;i<n;i++){
//          for(int j=i+1;j<n;j++){

//             if(arr[i]+arr[j]==k) {
//                 return  "Yes";

//             }

//         }
//     }
//     return "NO";
// }
// vector<int> pairSum(vector<int> arr, int k)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] + arr[j] == k)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }
// better using hashing  and optiomal for this
//  string pairSum(vector<int> arr,int k){
//      int n =arr.size();
//      map<int,int> mp;
//      for(int i=0;i<n;i++){
//          int rem=k-arr[i];
//          if(mp.find(rem)!=mp.end()){
//              return "YES";
//          }
//          mp[arr[i]]=i;
//      }
//      return "NO";

// }
// vector<int> pairSum(vector<int> arr,int k){
//     int n =arr.size();
//     map<int,int> mp;
//     for(int i=0;i<n;i++){
//         int rem=k-arr[i];
//         if(mp.find(rem)!=mp.end()){
//             return{mp[rem],i};
//         }
//         mp[arr[i]]=i;
//     }
//     return {-1,-1};

// }
// optimal approach

string pairSum(vector<int> arr, int k)
{
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
    if (arr[i] + arr[j] < k) i++;
    if (arr[i] + arr[j] > k) j--;
    if (arr[i] + arr[j] == k) return  "YES";
    
}

return "NO";
}
//not optimal for this
// vector<int> pairSum(vector<int> arr, int k)
// {
//     sort(arr.begin(),arr.end());
//     int n = arr.size();
//     int i = 0;
//     int j = n - 1;
//     while (i <j)
//     {
//     if (arr[i] + arr[j] == k) return  {i,j};
//     else if (arr[i] + arr[j] < k) i++;
//     else  j--;
    
// }

// return {-1,-1};
// }
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int k = 14;
    string result = pairSum(arr, k);
    cout << result;
    // vector<int> result = pairSum(arr, k);
    // cout << result[0] << " " << result[1];
}