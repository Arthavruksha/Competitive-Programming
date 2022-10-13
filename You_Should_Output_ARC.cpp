// Problem Link - https://atcoder.jp/contests/abc255/tasks/abc255_a

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

	int r,c;
	cin>>r>>c;

	int arr[2][2];

	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) {
			cin>>arr[i][j];
		}
	}

	cout<<arr[r-1][c-1]<<endl;

	

	return 0;
}
