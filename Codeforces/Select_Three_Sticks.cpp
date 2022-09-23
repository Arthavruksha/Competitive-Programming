//  Problem Link - https://codeforces.com/contest/1734/problem/A


#include <bits/stdc++.h>
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 

void solve(int n) {

	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);

	long long finalsum = 1e10;
	for(int i=1;i+1<n;i++){
		finalsum = min(finalsum, arr[i+1] - arr[i-1]);

	}

	cout<<finalsum<<endl;


}

int main() {
	OnlineJudge();

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		solve(n);
	}

	return 0;
}

