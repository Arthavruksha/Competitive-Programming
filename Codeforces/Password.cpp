// Problem Link - https://codeforces.com/contest/1743/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	int x = 10-n;

	int y = (x)*(x-1);

	y = y/2;

	cout << y*6 << endl;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--)solve();

	return 0;

}
