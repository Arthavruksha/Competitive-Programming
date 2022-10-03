// Problem Link - https://www.codechef.com/LRNDSA01/problems/FCTRL

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 

void solve(){
    ll n;
    ll ans = 0 ;
    cin>>n;
    ll cur = 5;
    while (cur<=n) {
        ans += (n/cur);
        cur *= 5;
    }
    
    cout<<ans<<endl;
    
}


int main() {
	OnlineJudge();
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

    return 0;
}

