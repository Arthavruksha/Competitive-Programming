// Problem Link - https://atcoder.jp/contests/abc132/tasks/abc132_b

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

	ll arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	ll count = 0;

	for(int i=1;i<(n-1);i++){
		if ( arr[i] > arr[i-1] and arr[i] < arr[i+1] ) count++;
		else if ( arr[i] < arr[i-1] and arr[i] > arr[i+1] ) count++;
	}

	cout << count << endl;

	return 0;

}

