// Problem Link - https://atcoder.jp/contests/abc242/tasks/abc242_a

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

	float a,b,c,x;
	cin>>a>>b>>c>>x;
	
	cout << setprecision(12);

	if (x <= a) cout<<1.000000000000<<endl;
	else if ( x <= b ) cout<< (c/(b-a)) << endl;
	else cout<< 0.000000000000 << endl; 




	return 0;
}
