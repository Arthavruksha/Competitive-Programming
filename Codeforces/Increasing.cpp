// Problem Link - https://codeforces.com/contest/1742/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
 
void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
    int ans = 0;
    for(int i=0;i<n-1;i++) {
    	if (arr[i]<arr[i+1]){
    		continue;
    	}
    	else {
    		ans =1;
    		break;
    	}
    }
    if (ans==1){
    	cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
 
}
 
 
int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
 
	int t;
	cin>>t;
	while(t--) solve();
 
 
 
	return 0;
}
