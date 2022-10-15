// Problem Link - https://codeforces.com/contest/1746/problem/B

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
	int sorted[n];
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr[i] = a;
		sorted[i] = a;
	}

	sort(sorted,sorted+n);

	int count= 0;

	for(int i=0;i<n;i++){
		if (arr[i] == sorted[i]) {
			continue;
		}
		else count++;
	}

	cout<<count/2<<endl;


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
