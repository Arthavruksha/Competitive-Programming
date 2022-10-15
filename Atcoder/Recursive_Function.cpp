// Problem Link - https://atcoder.jp/contests/abc273/tasks/abc273_a


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int f(int x){
	if (x==0) return 1;
	return x*f(x-1);
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int n;
	cin>>n;
	cout<<f(n)<<endl;

	return 0;
}
