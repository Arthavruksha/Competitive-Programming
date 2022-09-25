//  Problem Link - https://www.codechef.com/problems/BUYSWEET


#include <bits/stdc++.h>
#include <iostream>
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

    int t;
    cin>>t;
    while(t--) {
        ll n,r;
        cin>>n>>r;
        ll arr[n] , cashback[n] ;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)cin>>cashback[i];
        vector <pair<ll,ll>>ans;
        ll cost = 0;
        for(int i=0;i<n;i++) {
        	cost = arr[i] - cashback[i];
        	ans.push_back({cost,arr[i]});
        }
        sort(ans.begin(),ans.end());

        ll finalsum = 0;
        for(int i=0;i<n;i++) {
        	while(r>=ans[i].second) {
        		ll times = (r/ans[i].second);
        		finalsum += times;
        		r = r -  (times*ans[i].first) ;
        	}

        }
        cout<<finalsum<<endl;
        
        
    }
	return 0;
}

