// Problem Link - https://atcoder.jp/contests/abc181/tasks/abc181_a

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

	if(n%2==0)cout<<"White"<<endl;
	else cout<<"Black"<<endl;

	return 0;

}
