#include <bits/stdc++.h>
using namespace std;

int findstudents(vector<int> arr, int pages)
{
    int std=1,pagesStd=0;
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        if(pagesStd+arr[i]<=pages){
            pagesStd+=arr[i];
        }
        else {
            std++;
            pagesStd=arr[i];
        }
    }
    return std;
}
int minPages(vector<int> arr, int targetStds)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(),0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = findstudents(arr, mid);
        if(students<=targetStds) high=mid-1;
        else low=mid+1; 
    }
    return low;
}
int main()
{
    vector<int> arr = {25,46,28, 49,24};
    int targetStds=4;
    int ans = minPages(arr, targetStds);
    cout << ans;
}