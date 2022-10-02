// Problem Link - http://www.usaco.org/index.php?page=viewproblem2&cpid=572

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

	ll n,q;
	cin>>n>>q;
	int arr[n];
	vector <ll > dp1(n+1),dp2(n+1),dp3(n+1);
    for(int i=1;i<=n;i++) {
    	int type;
    	cin>>type;

    	dp1[i] = dp1[i-1];
    	dp2[i] = dp2[i-1];
    	dp3[i] = dp3[i-1];

    	if (type ==1) {
    		dp1[i]++;
    	}
    	else if ( type == 2) {
    		dp2[i]++;
    	}
    	else if (type == 3 ) {
    		dp3[i]++;
    	}
    }
    
    for(int i=1;i<=q;i++) {
    	ll a,b;
    	cin>>a>>b;
    	cout<<dp1[b]-dp1[a-1]<<" "<<dp2[b]-dp2[a-1]<<" "<<dp3[b]-dp3[a-1]<<endl;
    }
 
 
	return 0;
}
