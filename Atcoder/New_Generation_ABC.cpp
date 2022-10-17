// Problem Link - https://atcoder.jp/contests/abc214/tasks/abc214_a
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

	int n;
	cin>>n;

	if (n>=1 and n<=125)cout<<"4"<<endl;
	else if (n>=126 and n<=211)cout<<"6"<<endl;
	else if (n>=212 and n<=214)cout<<"8"<<endl;


	return 0;
}
