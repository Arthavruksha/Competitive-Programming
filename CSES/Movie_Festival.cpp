// Problem Link - https://cses.fi/problemset/task/1629/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
bool sortsecond(pair<int,int> a,pair<int,int> b) {
    return (a.second < b.second);
}


int main() {
    OnlineJudge();
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin>>n;
    vector <pair<int,int>> arr;
    for(int i=0;i<n;i++) {
        int s,e;
        cin>>s>>e;
        arr.push_back({s,e});
    }

    sort(arr.begin(),arr.end(),sortsecond);

    int count = 0;
    int endoflastmovie = -1;
    
    for(int i=0;i<n;i++){
        if ( arr[i].first >= endoflastmovie ){
            count++;
            endoflastmovie = arr[i].second;
        }
    }

    cout<<count<<endl;
    

 
    return 0;
}
