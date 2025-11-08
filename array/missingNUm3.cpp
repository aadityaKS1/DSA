#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum=(n*(n+1)/2);
        int actualSum=0;
        for(int i=0;i<n;i++){
            actualSum+=nums[i];
        }
        return totalsum-actualSum;
        
    }
};


int main(){
    vector<int> nums={0,4,5,1,2,3,9,6,7};
    Solution s1;
    int num=s1.missingNumber(nums);
    cout<<num;
    
}