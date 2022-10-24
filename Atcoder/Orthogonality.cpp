// Problem Link - https://atcoder.jp/contests/abc188/tasks/abc188_b

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

	int a[n],b[n];

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	int ans = 0;

    for(int i=0;i<n;i++){
    	ans += (a[i]*b[i]);
    }

    if (ans==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


	return 0;

}

