// Problem Link - https://atcoder.jp/contests/abc163/tasks/abc163_b

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

	ll m,n;
	cin>>n>>m;

	ll arr[m];
	ll sum = 0;
	for(int i=0;i<m;i++){
		cin>>arr[i];
		sum+=arr[i];
	}

	if (sum>n)cout<<"-1"<<endl;
	else cout<<n-sum<<endl;


	return 0;

}

