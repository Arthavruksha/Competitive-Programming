// Problem Link - https://atcoder.jp/contests/abc202/tasks/abc202_b

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

	reverse(s.begin(),s.end());

	for ( const auto x : s) {
		if (x == '6')cout<<"9";
		else if (x == '9')cout<<"6";
		else cout<<x;
	}

	cout<<endl;


 
	return 0;

}

