// Problem Link - https://oj.uz/problem/view/COCI17_tuna

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

	ll n,x;
	cin>>n>>x;
	ll sum = 0;
	for(int i=0;i<n;i++) {
		ll a,b,c;
		cin>>a>>b;
		if (abs(a-b) > x) {
			cin>>c;
			sum+=c;
		}
		else{
			if (a >= b) {
				sum+=a;
			}
			else {
				sum+=b;
			}
		}

	}

	cout<<sum<<endl;

	return 0;
}

