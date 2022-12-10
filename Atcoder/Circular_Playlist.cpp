// Problem Link - https://atcoder.jp/contests/abc281/tasks/abc281_c

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

	ll n,t,sum = 0 ;
	cin>>n>>t;

	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}

	if ( sum<t ) {
		ll rem = t%sum;
		for(int i=0;i<n;i++){
			if ( rem-arr[i] <= 0 ) {
				cout<<i+1<<" "<<rem<<endl;
				return 0;
			} 
			rem-=arr[i];
		}
	}

	else if ( sum==t ) {
		cout<<n<<" "<<0<<endl;
		return 0;
	}

	else  {
		for(int i=0;i<n;i++){
			if ( t-arr[i] <= 0 ) {
				cout<<i+1<<" "<<t<<endl;
				return 0;
			}
			t-=arr[i];
		}
	}


	return 0;
}
