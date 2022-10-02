// Problem Link - https://www.codechef.com/LRNDSA01/problems/ZCO14003?tab=statement

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll ans = 0;
    for(int i=0;i<n;i++) {
        ans = max(ans,arr[i]*(n-i) );
    }
    
    cout<<ans<<endl;
	return 0;
}
