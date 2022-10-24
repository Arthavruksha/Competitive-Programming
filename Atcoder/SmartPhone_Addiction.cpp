// Problem Link - https://atcoder.jp/contests/abc185/tasks/abc185_b

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

	ll n,m,t;
	cin>>n>>m>>t;

	ll count = n;
	ll last = 0;
	bool ans = true;

	for(int i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;

		count -=  (a-last);

		if (count<=0) ans = false;

		ll temp = (b-a);

		if (temp+count >= n) count = n;
		else count +=  temp;

		last = b;

	}

	count -= (t-last);
	if (count<=0) ans = false;

	if (ans) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;



	return 0;

}

