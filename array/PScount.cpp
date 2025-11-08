#include<bits/stdc++.h>
using namespace std;

int findSubArrCount(vector<int> & nums ,int k){
    unordered_map<int,int> mpp;
    int preSum=0;int cnt=0;
    mpp[0]=1;
    for(int i=0;i<nums.size();i++){
        preSum+=nums[i];
        int remove=preSum-k;
        cnt=cnt+mpp[remove];
        mpp[preSum]+=1;
    }
    return cnt;
}

int main(){
    vector<int> nums={1,2,3,-3,1,1,1,4,2,-3};   
    int k=3;
    int result=findSubArrCount(nums,k);
    cout<<"No of sub Array with sum k='3 ' is "<<result;
}