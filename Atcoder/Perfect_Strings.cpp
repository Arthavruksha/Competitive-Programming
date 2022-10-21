// Problem Link - https://atcoder.jp/contests/abc249/tasks/abc249_b

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

	int n = s.size();

	int lowercount = 0 , uppercount = 0;

	map <char,int> maps ;

	for(int i = 0 ; i < n ; i++ ) {
		maps[s[i]]++;
		if ( isupper(s[i]) ) uppercount++;
		else if ( islower(s[i]) ) lowercount++;
	}

	for(int i = 0 ; i < n ; i++ ) {
		if ( maps[s[i]] > 1 ) {
			cout<<"No"<<endl;
			return 0;
		}
	}

	if ( lowercount > 0 and uppercount > 0 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;

}

