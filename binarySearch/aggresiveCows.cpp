#include <bits/stdc++.h>
using namespace std;

bool cowDistancePoss(vector<int>& stalls, int distance, int k)
{
    int cntCows = 1, last = stalls[0];
    int n = stalls.size();
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last >= distance)
        {
            cntCows = cntCows + 1;
            last = stalls[i];
        }
    }
    return (cntCows >= k);
}
int aggresiveCows(vector<int> & stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int low = 0;
    int high = stalls.back() - stalls.front();

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (cowDistancePoss(stalls, mid, k) == true)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggresiveCows(stalls, k);
    cout << ans;
}