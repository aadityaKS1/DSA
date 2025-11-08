#include<bits/stdc++.h>
using namespace std;
// int LongestSubarray(vector<int> arr,int sumk){
//     int n=arr.size();
//     int len=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++){
//             long long sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=arr[k];
//             }
//             if(sum==sumk) {
//                 len=max(len,j-i+1);
//             }
//         }
//     }
//     return len;
// }
////better  and optoimal for negative
// int LongestSubarray(vector<int> arr,int k){
//     map<long long,int>preSumMap;
//     long long sum=0;
//     int maxLen=0;
//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//         if(sum==k){
//             maxLen=max(maxLen,i+1);
//         }
//         long long  rem=sum-k;
//         if(preSumMap.find(rem)!=preSumMap.end()){
//             int len=i-preSumMap[rem];
//             maxLen=max(maxLen,len);

//         }
//         if(preSumMap.find(sum)==preSumMap.end()){
//         preSumMap[sum]=i;
//         }
//     }
//     return maxLen;

// }
//optimal but not for negative numbers in array
int LongestSubarray(vector<int> arr,int k){
        int left=0, right=0;
        long long sum=0;
        int maxLen=0;
        int n=arr.size();
        while(right<n){
            sum+=arr[right];
            while(left<= right && sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            right++;
            
        }
    return maxLen;
}

int main(){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    long long  sumk=10;
    int len=LongestSubarray(arr,sumk);
    cout<<len;

}