#include<bits/stdc++.h>
using namespace std;

int main(){


    // precompute
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    int hash[26]={0};//hash array of size 26 since there are 26 characters
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;// hash['a'-'a']=hash[0]++//incrase 0 index of hash[] array
        // hash['p'-'a']=hash[15]++//incrase 15 index of hash[] array


        //int hash[256]={0};// if donet know lower or uppercase
        //hash[s[i]]++;// this will work AScii value of each character 'a'= 65 incremnt hash[65]++
        //cout<<"count: "<<hash[c]<<endl;//get the  count from hash array of index hash[c] ascii
    }

    
    cout<<"How many  characters you want to hash:"<<endl;
    int q;
    cin>>q;
    while(q--){
        char c;
        cout<<"character:";
        cin>> c;
        //fetch method
        cout<<"count: "<<hash[c-'a']<<endl;//get the  count from hash array of index hash[c-a]
    }

}
