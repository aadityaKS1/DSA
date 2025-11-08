#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n ;
    cout<<"Enter the number of elemetns"<<endl;

    cin>>n;
    int arr[n];
   
    cout<<"Enter the elemtns "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;//increase the value at index i
    }
    int q;
    cout<<"How many  numbers you want to hsah"<<endl;

    cin>>q;
    while(q--){
        int number;
        cout<<"numbers to hash:";

        cin>>number;
        cout<<"count: "<<mpp[number]<<endl; //get value form that index using number
        //fectch
    }
    return 0; 
}