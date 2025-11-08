#include<bits/stdc++.h>
using namespace std;
// void f(){
//     static int count=1;
//     if(count>5) return;
//     cout<<"hey aaditya "<<" "<< count<< endl;
//     count++;
//     f();
// }

// print 1 to N
void print12N(int i,int N){
    
    if(i>N) return;
    cout<<i<<endl;
    print12N(i+1,N);
}
//print N to 1
void printN21(int i,int N){
    
    if(i>N) return;
    cout<<N<<endl;
    printN21(i,N-1);
}
// by back tracking N to 1
void Bprint12N(int i,int N){
    
    if(i>N) return;
    Bprint12N(i+1,N);
    cout<<i<<endl;// here backtracking occurs
}
//print  1 to N  by backtraking
void BprintN21(int i,int N){
    
    if(i>N) return;
    BprintN21(i,N-1);//backtraing occurs here
    cout<<N<<endl;
}
int main(){
    // f();
    int n;
    cout<<"Enter the value of  N:"<<endl;
    cin>>n;
    cout<<" 1 to N :"<<endl;
    print12N(1,n);
    cout<<" N to 1:"<<endl;
    printN21(1,n);
    cout<<"Bacl traking N to 1"<<endl;
    Bprint12N(1,n);
    cout<<"Back tracking 1 to N:"<<endl;
    BprintN21(1,n);
    cout<<"Recursion Ends"<<endl;
}