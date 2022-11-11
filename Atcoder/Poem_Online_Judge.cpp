// Problem Link - https://atcoder.jp/contests/abc251/tasks/abc251_c

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

	vector <pair<string,ll>> arr;
	map <string,ll> maps;

	ll maxscore = 0;
	ll mini = 1e10;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		ll x;
		cin>>x;
		arr.push_back({s,x});
		maps[s]++;
		if ( maps[s] == 1 and (x > maxscore or i < mini) ) {
			maxscore = x;
			mini = i+1;
		} 
	}

	cout<<mini<<endl;


	return 0;

}

