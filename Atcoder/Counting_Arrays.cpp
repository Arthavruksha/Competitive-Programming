// Problem Link - https://atcoder.jp/contests/abc226/tasks/abc226_b

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

	set <vector<int>> headmaster;

	for(int i=0;i<n;i++) {

		int l;
		cin>>l;

		vector <int> arr(l+1);

		for(int i=0;i<l;i++) cin>>arr[i];

		headmaster.insert(arr);

	}

	cout<<headmaster.size()<<endl;


	return 0;
}
