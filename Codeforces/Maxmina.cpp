// Problem Link - https://codeforces.com/contest/1746/problem/A

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

	int n,k;
	cin>>n>>k;
	int arr[n];
	int large = 0;
	int small = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		small = min(small,arr[i]);
		large = max(large,arr[i]);
	}

	if (small == 0 and large == 1) {
		cout<<"YES"<<endl;
	}
	else if (small == 1 and large == 0) {
		cout<<"YES"<<endl;
	}
	else if (small == 0 and large == 0){
		cout<<"NO"<<endl;
	}

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
