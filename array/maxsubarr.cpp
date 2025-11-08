#include<bits/stdc++.h>
using namespace std;
// int findMaxsum(vector<int> &nums,int n){
//     int maximum=INT_MIN;
//     for(int i=0;i<n ;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             maximum=max(sum,maximum);
//         }

//     }
//     return maximum;
// }

int findMaxsum(vector<int> nums,int n){
    int maxi=nums[0  ];
    int sum=0;
    int start,ansStart=-1,ansEnd=-1;
    for(int i=0;i<n;i++){
        //for printing arraray
        if (sum==0) start =i;
        sum+=nums[i];
        if(sum<0) sum=0;
        if(sum>maxi) {
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
    }
    // for(int i=ansStart;i<=ansEnd;i++){//PRITNING SUBARRAY
    //     cout<<nums[i]<<" ";
    // }
    if (maxi<0) return 0;
    return maxi;
}
int main()
{
    vector<int>nums ={-2,-3,4,-1,-2,1,5,-3};
    int n =nums.size();
    int result=findMaxsum(nums,n);
    cout<<result;
    return 0;
    
}