#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int x)
{
    int low = 1, high = x ;
    while(low<=high){
        long long mid = (low + high) / 2;
        long long val=mid*mid;
        if(val>(long long)x) high=mid-1;
        else  low=mid+1;
    }
     return high;
}

int main()
{
    int result = floorSqrt(28);
    cout << "square root is is : " << result << endl;
}