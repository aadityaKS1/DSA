#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int findTotalHrs(vector<int> piles,int k){//calcute for each hours
    long long totalHr=0;
    int n =piles.size();
    for(int i=0;i<n;i++){
        totalHr+=ceil((double)piles[i]/(double)k);
    }
    return totalHr;
}
// int minimumRateBanans(vector<int >piles, int h){
//     int rate=0;
//     int maxEl=findMax(piles);
//     for(int i=1;i<=maxEl;i++){//increase hrs
//         int totalHr=findTotalHrs(piles,i);
//         if(totalHr<=h) return i;
//     }
//     return maxEl; //dummy return statement
// }
int minimumRateBanans(vector<int> piles,int h)
{
    int n = piles.size();
    int maxEl=findMax(piles);
    int low = 1, high = maxEl;
    while(low<=high){
        int mid = (low + high) / 2;
        int totalHr=findTotalHrs(piles,mid);
        if(totalHr<=h) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    vector<int> piles={7,15,6,3};
    int h=8;
    int ans=minimumRateBanans(piles,h);
    cout<<ans;
}