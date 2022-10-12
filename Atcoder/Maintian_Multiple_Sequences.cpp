// Problem Link - https://atcoder.jp/contests/abc271/tasks/abc271_b

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

	int n,q;
	cin>>n>>q;

	vector <vector<int>> arr(n);

	for(int i=0;i<n;i++) {
		int l;
		cin>>l;
		arr[i].resize(l);
		for(int j=0;j<l;j++) {
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<q;i++){
	    int a,b;
	    cin>>a>>b;
	    cout<<arr[a-1][b-1]<<endl;
	}



	return 0;
}
