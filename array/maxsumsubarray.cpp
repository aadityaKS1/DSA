#include<bits/stdc++.h>
using namespace std;

//brute
// int findMaxSubPro(vector<int> nums){
//     int n=nums.size();
//     int maxi=INT_MIN;
    
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int prod=1;
//             for(int k=i;k<=j;k++){
                
//                 prod*=nums[k];
//                 maxi=max(prod,maxi);
//             }
//         }
//     }
//     return maxi;
// }
//better
// int findMaxSubPro(vector<int> nums){
//     int n=nums.size();
//     int maxi=INT_MIN;
    
//     for(int i=0;i<n;i++){
//         int prod=1;
//         for(int j=i;j<n;j++){
//                 prod*=nums[j];
//                 maxi=max(prod,maxi);
            
//         }
//     }
//     return maxi;
// }
int findMaxSubPro(vector<int> nums){
    int maxi=INT_MIN;
    int pre=1,suf=1;
    for(int i=0;i<nums.size();i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre*=nums[i];
        suf*=nums[(nums.size())-1-i];
        maxi=max(maxi,max(pre,suf));
    }
    return maxi;
}

int main(){
    vector<int> nums={1,2,-3,0,-4,-5};
    int result=findMaxSubPro(nums);
    cout<<result;

}