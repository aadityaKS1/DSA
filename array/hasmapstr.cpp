#include<bits/stdc++.h>
using namespace std;
int  main(){
    // precompute
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
     map<char, int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    //precompute

    cout<<"How many  characters you want to hash:"<<endl;
    int q;
    cin>>q;
    while(q--){
        char c;
        cout<<"character:";
        cin>> c;
        //fetch method
        cout<<"count: "<<mpp[c]<<endl;//get the  count from hash array of index hash[c-a]
    } //fectch
    
    return 0; 
}