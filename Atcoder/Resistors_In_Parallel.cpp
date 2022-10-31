// Problem Link - https://atcoder.jp/contests/abc138/tasks/abc138_b

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

	float arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	float sum = 0;

	for(int i=0;i<n;i++){
		sum += (1/arr[i]);
		// cout << sum << endl;
	}

	cout<< (1/sum) << endl;


	return 0;

}

