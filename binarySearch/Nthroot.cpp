#include <bits/stdc++.h>
using namespace std;

int calculateExp(int mid,int n,int m){
    
    long long ans=1;
    for(int i=0;i<n;i++){
        ans=ans*mid;
        if(ans>m) return 2;
    }
        if(ans==m) return 1;
        else return 0;
        


}
int Nthroot(int m,int n)
{
    int low = 1, high = m ;
    while(low<=high){
        long long mid = (low + high) / 2;
        int ans=calculateExp(mid,n,m);
        if(ans==1) return mid;
        else if(ans==0) low=mid+1;
        else  high=mid-1;
    }
     return -1;
}

int main()
{   int m=69, n=3;
    int result = Nthroot(m,n);
    cout << "Nth root is is : " << result << endl;
}