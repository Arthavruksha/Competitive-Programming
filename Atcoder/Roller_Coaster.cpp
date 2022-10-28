// Problem Link - https://atcoder.jp/contests/abc142/tasks/abc142_b

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
	for(int i=0;i<n;i++)cin>>arr[i];
	int count = 0;
    for(int i=0;i<n;i++) if ( arr[i] >= x ) count++ ;
    cout<<count<<endl;

	return 0;

}

