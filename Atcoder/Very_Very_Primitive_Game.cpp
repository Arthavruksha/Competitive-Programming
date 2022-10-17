// Problem Link - https://atcoder.jp/contests/abc190/tasks/abc190_a

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

	int a,b,c;
	cin>>a>>b>>c;

	if (a+c>b)cout<<"Takahashi"<<endl;
	else cout<<"Aoki"<<endl;

	return 0;

}
