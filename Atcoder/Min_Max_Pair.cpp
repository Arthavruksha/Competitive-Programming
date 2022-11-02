// Problem Link - https://atcoder.jp/contests/abc262/tasks/abc262_c

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

	ll count = 0;
	
	ll arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if ( arr[i] == i  ) count++;
	}

	ll ans = ((count)*(count-1))/2;

	for(int i=1;i<=n;i++){
		if ( arr[arr[i]] == i and arr[i] > i  ) ans++ ;
	}

    cout<<ans<<endl;


	return 0;

}

