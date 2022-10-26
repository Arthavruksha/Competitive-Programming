// Problem Link - https://atcoder.jp/contests/abc156/tasks/abc156_b

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

	ll n,k;
	cin>>n>>k;

	ll ways = 0;

	while(n>0){
		n/=k;
		ways++;
	}

	cout<<ways<<endl;



	return 0;

}

