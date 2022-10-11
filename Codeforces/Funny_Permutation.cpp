// Problem Link - https://codeforces.com/contest/1741/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n;
	cin>>n;

	if (n==1) {
		cout<<"-1"<<endl;
	}
	else if (n==2) {
		cout<<"2 1"<<endl;
	}
	else if (n==3) {
		cout<<"-1"<<endl;
	}
	else if (n%2 == 0) {
		for(int i=n;i>=1;i--) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else {
		for(int i=n;i>(n+1)/2;i--) {
			cout<<i<<" ";
		}
		for(int i=1;i<=(n+1)/2;i++) {
			cout<<i<<" ";
		}
		cout<<endl;
	}


}



int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) {
		solve();
	}


	return 0;
}
