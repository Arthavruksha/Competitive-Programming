// Problem Link - https://atcoder.jp/contests/abc150/tasks/abc150_b

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

	string s;
	cin>>s;

	int count = 0;

	for(int i=0;i<n;i++){
		if ( (s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C') )  count++;
	}

	cout<<count<<endl;



	return 0;

}

