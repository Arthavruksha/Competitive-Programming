// Problem Link - https://atcoder.jp/contests/abc206/tasks/abc206_a

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

	int x = 1.08 * n;

	if (x<206)cout<<"Yay!"<<endl;
	else if (x == 206)cout<<"so-so"<<endl;
	else if (x>206)cout<<":("<<endl;


	return 0;
}
