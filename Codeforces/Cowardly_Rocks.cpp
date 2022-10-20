// Problem Link - https://codeforces.com/contest/1749/problem/A

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
	int n,m;
	cin>>n>>m;

	set <int> a ;
	set <int> b ;

	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a.insert(x);
		b.insert(y);
	}

	if ( a.size() < n and b.size() < n ){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;



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
