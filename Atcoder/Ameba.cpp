// Problem Link - https://atcoder.jp/contests/abc274/tasks/abc274_c

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

	ll n;
	cin>>n;
	vector <ll> arr( ((2*n)+1), 0 );
	for(int i=1;i<=n;i++){
		ll x;
		cin>>x;
		arr[2*i] = arr[x] + 1;
		arr[(2*i)+1] = arr[x] + 1;
	}

	for(int i=1;i<=((2*n)+1);i++) cout<<arr[i]<<endl;


	return 0;

}

