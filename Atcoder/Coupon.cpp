// Problem Link - https://atcoder.jp/contests/abc246/tasks/abc246_c

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

	ll n,k,x;
	cin>>n>>k>>x;

	ll arr[n];
	vector <ll> ans;
	for(int i=0;i<n;i++) cin>>arr[i];

	sort(arr,arr+n,greater<ll>());
    
    for(int i=0;i<n;i++){
    	int times = min(arr[i]/x,k);
    	arr[i] -= (times*x);
    	k-=times;
    }

    sort(arr,arr+n,greater<ll>());

    for(int i=0;i<n;i++){
    	if (k==0) break;
    	arr[i] = 0;
    	k--; 
    }

    ll sum = 0;

    for(auto i:arr)sum+=i;

    cout<<sum<<endl;


	return 0;
}

