// Problem Link - https://atcoder.jp/contests/abc231/tasks/abc231_c

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
	vector <int> arrn(n);
 
	for(int i=0;i<n;i++) cin>>arrn[i];
 
	sort(arrn.begin(),arrn.end());
 
	for(int i=0;i<q;i++){
		int x;
		cin>>x;

		cout<<arrn.end() - lower_bound(arrn.begin(), arrn.end(), x)<<endl; 

	}
 
 
	return 0;
}

