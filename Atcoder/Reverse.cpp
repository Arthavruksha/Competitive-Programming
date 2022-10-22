// Problem Link - https://atcoder.jp/contests/abc233/tasks/abc233_b

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

	int l,r;
	cin>>l>>r;

	string s;
	cin>>s;

	while(l<r){
		swap(s[l-1],s[r-1]);
		l++;
		r--;
	}

	cout<<s<<endl;

	return 0;

}

