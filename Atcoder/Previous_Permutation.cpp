// Problem Link - https://atcoder.jp/contests/abc276/tasks/abc276_c

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

	vector <ll> arr(n);

	for(int i=0;i<n;i++) cin>>arr[i];

	prev_permutation(arr.begin(),arr.end());

    for( auto i :  arr ) cout << i << " ";


	return 0;

}

