#include <bits/stdc++.h>
using namespace std;
// BRUTEFORCE
// vector<vector<int>> mergeInterval(vector<vector<int>> &intervals)
// {
//     sort(intervals.begin(), intervals.end());
//     vector<vector<int>> ans;
//     for(int i=0;i<intervals.size();i++){
//         int start=intervals[i][0];
//         int end=intervals[i][1];
//         if(!ans.empty() && end<=ans.back()[1]) continue;
//         for(int j=i+1;j<intervals.size();j++){
//             if(intervals[j][0]<=end){
//                 end=max(end,intervals[j][1]);
//             }
//             else break;
//         }
//         ans.push_back({start,end});
//     }


//     return ans;
// }
//better/optimal
vector<vector<int>> mergeInterval(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for(int i=0;i<intervals.size();i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(ans.empty() || intervals[i][0]>ans.back()[1]) {
            ans.push_back({intervals[i]});
        }
        else {
            ans.back()[1]= max(ans.back()[1],intervals[i][1]); 

        }
    }
    return ans; 
}

int main()
{
    vector<vector<int>> intervals = {{1,3},{8,10},{2,6},{15,18}};
    vector<vector<int>> result = mergeInterval(intervals);
    for (auto it : result)
    {
        cout << "[";
        for (auto el : it)
        {
            cout << el << " ";
        }
        cout << "]";
    }
}