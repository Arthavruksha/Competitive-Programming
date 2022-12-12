// Problem Link - https://codeforces.com/contest/1771/problem/A

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

	ll n;
	cin>>n;

	vector <ll> arr(n);

	map <ll,ll> maps;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		maps[arr[i]]++;
	}

	sort(arr.begin(),arr.end(),greater<ll>());

	if ( arr[0] != arr[n-1] ) {
		cout<<maps[arr[0]]*maps[arr[n-1]]*2<<endl;
	}
	else {
		cout<<maps[arr[0]] * (maps[arr[0]]-1) <<endl;
	}

}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll t;
	cin>>t;
	while(t--)solve();


	return 0;
}
