// Problem Link - https://atcoder.jp/contests/abc155/tasks/abc155_b

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

	ll n;
	cin>>n;

	for(int i=0;i<n;i++){
		ll x;
		cin>>x;

		if ( x%2 == 0 ) {
			if ( ( x%3 == 0 ) or ( x%5 == 0 )  ) continue ;
			else {
				cout<<"DENIED"<<endl;
				return 0;
			}
		}

	}

	cout<<"APPROVED"<<endl;
	return 0;



	return 0;

}

