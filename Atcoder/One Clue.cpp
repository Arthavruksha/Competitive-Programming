// Problem Link - https://atcoder.jp/contests/abc137/tasks/abc137_b

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

	ll k , x;
	cin>>k>>x;

	vector <int> arr;

	for(int i=1;i<k;i++){
		ll temp = x-i;
		arr.push_back(temp);
	}

	for(int i=0;i<k;i++){
		ll temp = x+i;
		arr.push_back(temp);
	}

	sort(arr.begin(),arr.end());

	for(auto x: arr) cout<<x<<" ";


	return 0;

}

