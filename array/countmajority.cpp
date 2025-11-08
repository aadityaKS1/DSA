#include<bits/stdc++.h>
using namespace std;
// int findMajority(vector<int> nums,int n){
//     int count0=0,count2=0,count7=0,count1=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]==0) count0++;
//         else if(nums[i]==1) count1++;
//         else if(nums[i]==2) count2++;
//         else if(nums[i]==7) count7++;
//     }
//     if(count0>n/2) return 0;
//     else if(count1>n/2) return 1;
//     else if(count2>n/2) return 2;
//     else if(count7>n/2) return 7;
//     return -1;
// }
// int findMajority(vector<int> nums,int n){
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(nums[i]==nums[j]) count++;
//         }
//         if(count>n/2) return nums[i];
//     }
//     return -1;
// }
// int findMajority(vector<int> nums,int n){
//     map<int,int> hash;
//     for(int i=0;i<n;i++){
//         hash[nums[i]]++;
//     }
//     for(auto it:hash){
//         if(it.second>n/2) return it.first;
//     }
//     return -1;
// }
int findMajority(vector<int> nums,int n){
    int count=0;
    int element;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            element=nums[i];
        }
        if(nums[i]==element) count++;
        else  count--;
    }
    int count1=0;
    for(int i=0;i<n;i++){
        if(nums[i]=element) count1++;
    }
    if(count1>n/2) return element;
    return -1;
}
int main(){
    vector<int> nums={7,0,0,1,7,7,2,7,7};
    int n =nums.size();
    int result=findMajority(nums,n);
    cout<<result;


}