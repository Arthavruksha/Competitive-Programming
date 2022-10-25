// Problem Link - https://atcoder.jp/contests/abc176/tasks/abc176_b

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

	string s;
	cin>>s;

	ll n =  s.size();

	ll sum = 0;

	for(int i=0;i<n;i++){
		sum += (int) s[i] - 48;
	}

	if ( sum%9 == 0 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



	return 0;

}

