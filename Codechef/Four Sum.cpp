// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO17001

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

	int n,t;
	cin>>n>>t;

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	int mega[1000000];
    int ans = 0;

    for(int i=0;i<n;i++) {
    	for(int j=i+1;j<n;j++){
    		int temp = arr[i] + arr[j];
    		if ( temp <= t ) {
    			ans += mega[t-temp];
    		}
    	}
    	for(int j=0;j<i;j++){
    		int temp = arr[i]+arr[j];
    		if ( temp<=t ) {
    			mega[temp]++;
    		}
    	}
    }

    cout<<ans<<endl;
    

	return 0;
}
