#include <bits/stdc++.h>
using namespace std;

void reverseArr(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArr(i + 1, arr, n);
}

int main()
{
    int arr[] = {3, 45, 75, 754, 88, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    reverseArr(0, arr, size);
    cout << endl<<"After:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}