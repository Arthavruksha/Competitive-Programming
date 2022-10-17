// Problem Link - https://atcoder.jp/contests/abc216/tasks/abc216_a

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

	int y = s[n-1] - '0' ;

	string x = s.substr(0,n-2);

	if ( y>= 0 and y<= 2 ) {
		cout<<x<<"-"<<endl;
	}
	else if ( y>=3 and y<=6) {
		cout<<x<<endl;
	}
	else if ( y>=7 and y<=9 ) {
		cout<<x<<"+"<<endl;
	}




	return 0;
}
