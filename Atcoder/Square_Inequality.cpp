// Problem Link - https://atcoder.jp/contests/abc199/tasks/abc199_a

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

	int a,b,c;
	cin>>a>>b>>c;

	int x = a*a + b*b ;
	int y = c*c;

	if (x<y) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;
}
