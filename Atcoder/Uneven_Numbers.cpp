// Problem Link - https://atcoder.jp/contests/abc136/tasks/abc136_b

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

	for(int i=1;i<=n;i++){
		string temp =  to_string(i);
		ll len = temp.size();
		if ( len%2 != 0 ) count++; 
	}

	cout<<count<<endl;


	return 0;

}

