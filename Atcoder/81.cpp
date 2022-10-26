// Problem Link - https://atcoder.jp/contests/abc147/tasks/abc147_b

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

	for(int i=1;i<=9;i++){
		ll temp =  n/i;
		if (temp<=9 and n%i==0) {
			// cout<<i<<endl;
			cout<<"Yes"<<endl;
			return 0;
		}
 	}

 	cout<<"No"<<endl;

	return 0;

}

