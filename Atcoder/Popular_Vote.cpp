// Problem Link - https://atcoder.jp/contests/abc161/tasks/abc161_b

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

	ll m,n;
	cin>>n>>m;

	ll arr[n];
	ll sum = 0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}


	sort(arr,arr+n,greater<int>());

    int count = 0;

    for(int i=0;i<m;i++){
    	if ( arr[i]*4*m >= sum  ) count++;
    }

    if ( count >= m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


	return 0;

}

