// Problem Link - https://atcoder.jp/contests/abc279/tasks/abc279_c

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

	ll h,w;
	cin>>h>>w;

	vector <vector<ll>> s(w,vector<ll>(h,0)) ; 
	vector <vector<ll>> t(w,vector<ll>(h,0)) ; 

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			char a;
			cin>>a;
			if ( a == '#' ) s[j][i] = 1;
		}
	}

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			char a;
			cin>>a;
			if ( a == '#' ) t[j][i] = 1;
		}
	}

	sort(s.begin(),s.end());
	sort(t.begin(),t.end());


	if ( s==t ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



 
	return 0;
}

