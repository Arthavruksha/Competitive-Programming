// Problem Link - https://atcoder.jp/contests/abc152/tasks/abc152_b

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

	ll a,b;
	cin>>a>>b;

	string first , second;

	for(int i=0;i<a;i++) first += to_string(b);
	for(int i=0;i<b;i++) second += to_string(a);

	if ( first >= second ) cout << second << endl;
    else cout << first << endl;



	return 0;

}

