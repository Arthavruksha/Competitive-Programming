// Problem Link - https://www.codechef.com/LRNDSA01/problems/CONFLIP

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 


void solve() {
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
    ll l,n,q;
    cin>>l>>n>>q;
    if (n%2==0){
        cout<<(n/2)<<endl;
    }
    else {
        if (l==q)cout<<(n/2)<<endl;
        else cout<<((n/2)+1)<<endl;

    }
    

    
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int g;
	    cin>>g;
	    while(g--) {
	        solve();
	    }
	}

    return 0;
}

