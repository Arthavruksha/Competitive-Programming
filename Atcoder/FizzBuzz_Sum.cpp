// Problem Link - https://atcoder.jp/contests/abc162/tasks/abc162_b

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

	ll sum = 0;

	for(int i=0;i<=n;i++){
		if ( i%3 == 0 or i%5 == 0 ) continue;
		else sum+=i;
	}

	cout<<sum<<endl;


	return 0;

}

