// Problem Link - https://atcoder.jp/contests/abc175/tasks/abc175_b

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

	ll arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];

	ll ways = 0;

    for(int i=1;i<=n;i++){
    	for(int j=i;j<=n;j++){
    		for(int k=j;k<=n;k++){
    			if ( i==j and j==k ) continue; 
    			else if ( arr[i] == arr[j] or arr[j] == arr[k] or arr[i] == arr[k] ) continue;
    			else {
    				if ( (arr[i] + arr[j] > arr[k])  and (arr[k] + arr[i] > arr[j])  and  (arr[j] + arr[k] > arr[i]) ) {
    					ways++;
    				}
    			}
    		}
    	}
    }

    cout<<ways<<endl;



	return 0;

}

