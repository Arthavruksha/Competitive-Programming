// Problem Link - https://atcoder.jp/contests/abc207/tasks/abc207_b

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

	ll a,b,c,d;
	cin>>a>>b>>c>>d;

	ll red = 0;
	ll blue = a;

	if ( blue <= (2*red) ) {
		cout<<"0"<<endl;
		return 0;
	}
	

	for(int i=0;i<1e7;i++){
		red+=c;
		blue+=b;

		if ( blue <= (d*red) ) {
			cout<<i+1<<endl;
			return 0;
		}
	}

	cout<<"-1"<<endl;


 
	return 0;

}

