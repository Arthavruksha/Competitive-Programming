// Problem Link - https://codeforces.com/contest/1736/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	int ans = 0;

    for(int i=0;i<n;i++) {
    	if(a[i] ==  b[i]) {
    		continue;
    	}
    	else ans ++;
    }

    int ans2 = 0;
    sort(a,a+n);
    sort(b,b+n);
    ans2++;
    for(int i=0;i<n;i++) {
    	if(a[i] ==  b[i]) {
    		continue;
    	}
    	else ans2 ++;
    }

    cout<<min(ans,ans2)<<endl;

}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();



	return 0;
}
