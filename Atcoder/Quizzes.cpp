// Problem Link - https://atcoder.jp/contests/abc184/tasks/abc184_b

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

	ll n,x;
	cin>>n>>x;

	string s;
	cin>>s;

	ll count  = x;

	for(int i=0;i<n;i++){
		if ( s[i] == 'o' ) count++;
		else {
			if (count == 0) continue;
			else count--;
		}
	} 

	cout<<count<<endl;



	return 0;

}

