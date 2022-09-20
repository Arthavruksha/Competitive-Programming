//  Problem Link - https://codeforces.com/contest/1097/problem/B

#include <bits/stdc++.h>
using namespace std;
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 
 
 
int main() {
	OnlineJudge();
 
	int n;
	cin>>n;
	int arr[n];
 
	for(int i=0;i<n;i++) cin>>arr[i];
 
	for(int mask=0;mask<(1<<n);mask++) {
 
		int total = 0;
 
		for(int i=0;i<n;i++) {
 
			if ( mask & (1<<i) ) {
				total += arr[i];
			}
			else {
				total -= arr[i];
			}
		}
 
		if (total%360 ==0) {
			cout<<"YES"<<endl;
			return 0;
		}
 
 
	}cout<<"NO"<<endl;
	
    return 0;
}
