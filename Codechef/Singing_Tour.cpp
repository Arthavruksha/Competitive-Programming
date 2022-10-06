// Problem Link - https://www.codechef.com/ZCOPRAC/problems/SINGTOUR

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> arr, arr1;
        for(int i = 0; i < n; i++){
            int l,h;
            cin>>l>>h;
            arr.push_back({l,i});
            arr1.push_back({h,i});
        }
        sort(arr.begin(), arr.end());
        sort(arr1.rbegin(), arr1.rend());

        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[arr[i].second] += n-(i+1);
            ans[arr1[i].second] += n-(i+1);
        }
        for(int x:ans)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
