#include <bits/stdc++.h>
using namespace std;
// burte force
// int nCr(int n ,int r){
//     long   long int res=1;
//     for(int i=0;i<r;i++){
//         res=( res*(n-i))/(i+1);

//     }
//     return res;
// }
// void printNrow(int n){
//     for(int col=1;col<=n;col++){
//         cout<<nCr(n-1,col-1)<<" ";

//     }
// }
// optimal
void printPascalRow(int row){
    long long ans=1;
    cout<<ans<<" ";
    for(int c=1;c<=row;c++){
        ans=ans*(row-c)/c;
        cout<<ans<<" ";
    }
    cout<<endl;
}
// bruteforce
// void printPascalTraingle(int n){
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=n;c++){
//             cout<<(nCr(r-1,c-1))<<" ";
//         }
//         cout<<endl;
//     }
// }
// optimal
void printPascalTraingle(int n)
{
    for(int i=1;i<=n;i++){
        printPascalRow(i);

    }
}
int main()
{
    int n = 6;
    int r = 3;
    // int result=nCr(n-1,r-1);
    // cout<<result<<endl;
    //  printNrow(n);
    // printPascalRow( n);
    printPascalTraingle(n);
}