// Problem Link - https://atcoder.jp/contests/abc236/tasks/abc236_c

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

	int n,m;
	cin>>n>>m;
	vector <string> s (n);
	vector <string> t (m);

	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<m;i++) cin>>t[i];

	set <string> rapid (t.begin(),t.end());

    for(int i=0; i<n; i++ ){
    	if ( rapid.count(s[i]) > 0 ) {
    		cout<<"Yes"<<endl;
    	}
    	else cout<<"No"<<endl;
    }


	return 0;
}
