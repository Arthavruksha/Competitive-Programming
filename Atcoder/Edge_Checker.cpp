// Problem Link  - https://atcoder.jp/contests/abc240/tasks/abc240_a

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

	int a,b;
	cin>>a>>b;

	if (a==1 and b==10) cout<<"Yes"<<endl;
	else if ( b-a == 1 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


	return 0;
}
