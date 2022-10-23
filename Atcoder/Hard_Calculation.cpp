// Problem Link - https://atcoder.jp/contests/abc229/tasks/abc229_b

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

	ll a,b;
	cin>>a>>b;

	while(a>0 and b>0){
		if ( ((a%10) + (b%10)) >=10) { cout<<"Hard"<<endl;return 0;}
		a/=10;b/=10;
	}

	cout<<"Easy"<<endl;


	return 0;

}

