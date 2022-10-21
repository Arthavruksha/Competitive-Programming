// Problem Link - https://atcoder.jp/contests/abc245/tasks/abc245_b

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

    for(int i=0;i<=n;i++){
    	bool ans = true;

    	for(ll x:arr) {
    		if ( x == i ) ans = false;
    	}
    	if (ans == true) {
    		cout<<i<<endl;
    		return 0;
    	}
    }


	return 0;

}

