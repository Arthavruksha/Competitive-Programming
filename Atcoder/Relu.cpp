// Problem Link - https://atcoder.jp/contests/abc183/tasks/abc183_a

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

	int x;
	cin>>x;

	if (x< 0) cout<<"0"<<endl;
	else if (x>= 0) cout<<x<<endl;

	return 0;

}
