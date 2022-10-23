// Problem Link - https://atcoder.jp/contests/abc222/tasks/abc222_b

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

	int n,p;
	cin>>n>>p;

	int count = 0;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if (x<p)count++;
	}

	cout<<count<<endl;

	return 0;

}

