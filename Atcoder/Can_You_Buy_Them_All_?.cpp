// Problem Link - https://atcoder.jp/contests/abc209/tasks/abc209_b

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

	int n,x;
	cin>>n>>x;

	int arr[n];

	int sum = 0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		if ( i%2 == 0 ) sum += arr[i];
		else sum += (arr[i]-1);
	}

	if (sum<=x) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
 
	return 0;

}

