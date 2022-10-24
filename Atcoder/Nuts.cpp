// Problem Link - https://atcoder.jp/contests/abc204/tasks/abc204_b

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

	ll arr[n];

	for(int i=0;i<n;i++)cin>>arr[i];

	ll sum = 0;

    for(int i=0;i<n;i++){
    	if (arr[i]<=10) continue;
    	else sum+= (arr[i]-10);
    }

    cout<<sum<<endl;

 
	return 0;

}

