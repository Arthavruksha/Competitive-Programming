// Problem Link - https://atcoder.jp/contests/abc267/tasks/abc267_a

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

	string s;
	cin>>s;

	if(s == "Monday")cout<<5<<endl;
	else if (s== "Tuesday")cout<<4<<endl;
	else if (s== "Wednesday")cout<<3<<endl;
	else if (s== "Thursday")cout<<2<<endl;
	else if (s== "Friday")cout<<1<<endl;


	return 0;
}
