#include <bits/stdc++.h>
using namespace std;

bool findPossible(vector<int> arr, int days, int m, int k)
{
    int n = arr.size();
    int cnt = 0;
    int noOfB;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= days)
            cnt++;
        else
        {
            noOfB = cnt / k;
            cnt = 0;
        }
    }
    noOfB += cnt / k;//when all flowers are bloomed
    return noOfB>=m;
}
int minDayFindBookey(vector<int> arr, int m, int k)
{
    int n = arr.size();
    if ( (long) m*k> n)
        return -1;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    int low = mini, high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        bool possible = findPossible(arr, mid, m, k);
        if (possible == true)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2, k = 3;
    int ans = minDayFindBookey(arr, m, k);
    cout << ans;
}