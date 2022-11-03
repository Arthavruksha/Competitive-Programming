// Problem Link - https://atcoder.jp/contests/abc261/tasks/abc261_c

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

	map <string,int> maps; 

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		maps[s]++;
		if ( maps[s] == 1 ) cout<<s<<endl;
		else cout<<s<<"("<<maps[s]-1<<")"<<endl;
	}

	
	return 0;

}

