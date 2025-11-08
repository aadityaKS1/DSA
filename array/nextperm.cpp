#include<bits/stdc++.h>
using namespace std;
//better soluiton only for c++ using stl library
// vector<int> findNextPer(vector<int> &nums){
//      next_permutation(nums.begin(),nums.end());
//      return nums;
// }
vector<int> findNextPer(vector<int> nums){
    int idx=-1;
    int n=nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) {
        reverse(nums.begin(),nums.end());
        return nums;
    }
    for(int i=n-1;i>=idx;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
            break;
        }
    }
    reverse(nums.begin()+idx+1,nums.end());
    return nums;

}

int main()
{
    vector<int> nums={2,1,5,4,3,0,0};
    vector<int> result= findNextPer(nums);
    for(int x:result) cout<<x<<" ";
    return 0;
}