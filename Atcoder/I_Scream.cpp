// Problem Link - https://atcoder.jp/contests/abc194/tasks/abc194_a

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

	int a,b;
	cin>>a>>b;

	int c = a+b;

	if (c>=15 and b>=8) cout<<"1"<<endl;
	else if (c>=10 and b>=3) cout<<"2"<<endl;
	else if (c>=3) cout<<"3"<<endl;
	else cout<<"4"<<endl;


	return 0;

}
