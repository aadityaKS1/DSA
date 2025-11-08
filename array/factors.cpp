#include<bits/stdc++.h>
using namespace std;


void printFactors(int N){
    vector<int>factors;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            factors.push_back(i);
            if(N/i!=i) factors.push_back(N/i);
            
        }
    }
    sort(factors.begin(),factors.end());
    cout<<"The Factors of "<<N<<""<<" are:"<<endl;
    for(int f:factors){//we can write auto insted of int
        cout<<f<<" ";
    }
}
// void printFactors(int N){
//     for(int i=1;i<=N;i++){
//         if(N%i==0){
//             cout<<i<<" ";
//         }
//     }
// }


vector<int> printDivisors(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (n / i != i) {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());

    return factors;
}

int main(){
    cout<<"Enter the number"<<endl;
    int N;
    cin>>N;
    printFactors(N);
    cout<<endl;
    vector<int> a= printDivisors(36);
    cout<<"The factors are:"<<endl;
    for(int f:a){
        cout<<f<<" ";
    }
    
}