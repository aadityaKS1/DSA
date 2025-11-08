#include <bits/stdc++.h>
using namespace std;

int findDays(vector<int> wt, int capacity)
{
    int day=1,load=0;
    int n=wt.size();
    for (int i = 0; i < n; i++)
    {
        if(load+wt[i]>capacity){
            day=day+1;
            load=wt[i];
        }
        else load+=wt[i];
    }
    return day;
}
int minCapacity(vector<int> wt, int targetDays)
{
    int low = *max_element(wt.begin(), wt.end());
    int high = accumulate(wt.begin(), wt.end(),0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int noOfDays = findDays(wt, mid);
        if(noOfDays<=targetDays) high=mid-1;
        else low=mid+1; 
    }
    return low;
}
int main()
{
    vector<int> wt = {1,2,3,4,5,6,7,8,9,10};
    int targetDays=5;
    int ans = minCapacity(wt, targetDays);
    cout << ans;
}