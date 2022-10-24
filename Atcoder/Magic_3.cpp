// Problem Link - https://atcoder.jp/contests/abc190/tasks/abc190_b

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

	ll n,s,d;
	cin>>n>>s>>d;

	vector <pair<ll,ll>> arr;

	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		if ( (a<s) and (b>d) ){
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;



	return 0;

}

