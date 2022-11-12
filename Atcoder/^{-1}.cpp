// Problem Link - https://atcoder.jp/contests/abc277/tasks/abc277_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int n,x;
	cin>>n>>x;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if ( arr[i] == x ) cout<<i+1<<endl;
	}


	return 0;
}

