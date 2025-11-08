#include<bits/stdc++.h>
using namespace std;
// int findMaxProfit(vector<int> arr, int n){
//     int maxprofit=INT_MIN;
//     for(int i=0;i<n;i++){

//           for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i])  maxprofit=max(maxprofit,arr[j]-arr[i]);           
//           }
    
//     }
//     return maxprofit;
// }
int findMaxProfit(vector<int> arr, int n){
    int mini=arr[0];
    int maxprofit=0;
    for(int i=1;i<n;i++){
        maxprofit=max(maxprofit,arr[i]-mini);
        mini=min(mini,arr[i]);
    }

     
    return maxprofit;
}


int main()
{
    vector<int> arr={10,7,5,8,11,9};
    int n=arr.size();
    int res=findMaxProfit(arr,n);
    cout<<res;
}