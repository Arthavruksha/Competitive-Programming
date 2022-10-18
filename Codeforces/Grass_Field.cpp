// Problem Link - https://codeforces.com/contest/1701/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a == 1 or b==1 or c==1 or d==1) {
		int x = max(a,b);
		int y = max(c,d);
		if (x+y == 1) cout<<1<<endl;
		else if ( (a == 1 and b==1) or (a==1 and c==1) or (c==1 and d==1) or (d==1 or b==1)  ) {
			if (a==b and b==c and c==d) {
				cout<<2<<endl;
			}
			else cout<<1<<endl;
		} 
		else cout<<2<<endl;
	}
	else cout<<"0"<<endl;

}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();
	return 0;

}
