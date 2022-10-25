// Problem Link - https://atcoder.jp/contests/abc164/tasks/abc164_b

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

	ll i = 0;

	while(true){
		if ( i%2 == 0 ) c-=b;
		else a-=d;

		if (a<=0 or c<=0) {
			if (a<=0) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
			break;
		}

		i++;
	}



	return 0;

}

