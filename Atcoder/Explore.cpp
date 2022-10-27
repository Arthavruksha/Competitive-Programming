// Problem Link - https://atcoder.jp/contests/abc265/tasks/abc265_b

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


	ll sum = t;

	ll arr[n];
	for(int i=1;i<n;i++) cin>>arr[i];

	vector <ll> bonus(n,0) ;
    
    for(int i=0;i<m;i++) {
    	ll x,y;
    	cin>>x>>y;
    	bonus[x-1] = y;
    }

    for(int i=1;i<n;i++){
    	sum-=arr[i];

    	if ( sum<=0 ) {
    		cout<<"No"<<endl;
    		return 0;
    	}

    	sum+=bonus[i];
    }

    cout<<"Yes"<<endl;

	return 0;

}

