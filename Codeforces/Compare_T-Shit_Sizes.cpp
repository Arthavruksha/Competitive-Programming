// Problem Link - https://codeforces.com/contest/1741/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


void solve() {
	string a,b;
	cin>>a>>b;
	int n1 = a.size();
	int n2 = b.size();

	map <char, int> rapid;

	rapid['S'] = 1;
	rapid['M'] = 2;
	rapid['L'] = 3;

	int v1 = rapid[a[n1-1]];
	int v2 = rapid[b[n2-1]];

	if (v1 > v2) cout<<">"<<endl;
	else if (v2 > v1) cout<<"<"<<endl;
	else {
		if (v1 == 3) {
			if (n1 > n2) cout<<">"<<endl;
			else if (n2> n1) cout<<"<"<<endl;
			else cout<<"="<<endl;
		}
		else if (v1 == 1) {
			if (n1 > n2) cout<<"<"<<endl;
			else if (n2> n1) cout<<">"<<endl;
			else cout<<"="<<endl;
		}
		else cout<<"="<<endl;
	}

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
