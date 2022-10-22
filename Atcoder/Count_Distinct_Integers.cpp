// Problem Link - https://atcoder.jp/contests/abc240/tasks/abc240_b

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

	int n;
	cin>>n;

	set <int> ans;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		ans.insert(x);
	}

	cout << ans.size() << endl;

	return 0;

}

