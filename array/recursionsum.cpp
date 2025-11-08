#include<bits/stdc++.h>
using namespace std;
int findsum(int N){
    if(N==0) return 0;
    return findsum(N-1)+N;
    
}
int findSum(int i,int sum){
    if(i<1) return sum;
     return findSum(i-1,sum+i);
    
}
int main(){
    int a=findsum(5);
    cout<<a<<endl;
    int b=findSum(5,0);
    cout<<b<<endl;

}