#include <bits/stdc++.h>
using namespace std;

int divSum(vector<int> arr, int mid)
{
    int n = arr.size();
    int divSum=0;

    for (int i = 0; i < n; i++)
    {
        divSum+=ceil((double)arr[i]/(double)mid);
    }
    //when all flowers are bloomed
    return divSum;
}
int smallestDiv(vector<int> arr, int targetSum)
{
    int n = arr.size();
    if(n>targetSum)return -1;
    int low = 1,  high = *max_element(arr.begin(), arr.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sum = divSum(arr, mid);
        if(sum<=targetSum) high=mid-1;
        else low=mid+1; 
    }
    return low;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int targetSum=8;
    int ans = smallestDiv(arr, targetSum);
    cout << ans;
}