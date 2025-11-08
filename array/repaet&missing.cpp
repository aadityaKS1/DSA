#include <bits/stdc++.h>
using namespace std;

vector<int> findRepatedMissing(vector<int> arr)
{
    int n = arr.size();
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
                cnt++;
        }
        if (cnt == 2)
            repeating = i;
        if (cnt == 0)
            missing = i;
    }
    return {repeating, missing};
}

int main()
{
    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> results = findRepatedMissing(arr);
    cout << "Repeated is " << results[0] << endl;
    cout << "Missing is " << results[1] << endl;
}