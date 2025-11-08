#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elemetns"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemtns "<<endl;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    
    int q;
    cout<<"How many  numbers you want to hsah"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"numbers to hash:"<<endl;
        cin>> number;
        //fetch method
        cout<<hash[number]<<endl; 
    }

}
