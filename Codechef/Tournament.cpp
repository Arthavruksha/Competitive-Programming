// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO13001

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n;
	cin>>n;
	ll ans=0;
	ll totalmatches = (n*(n-1))/2;
	ll arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++) {
	    ans += arr[i]*i;
	}
	for(int i=0;i<n;i++) {
	    ans -= arr[i]*(n-(i+1));
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}
