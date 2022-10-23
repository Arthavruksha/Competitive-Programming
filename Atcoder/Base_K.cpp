// Problem Link - https://atcoder.jp/contests/abc220/tasks/abc220_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

ll conversion(string s,ll k){

	ll sum = 0;

	for(char i : s){
		sum *= k;
		sum += i - '0';
	}

	return sum;

}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll k;
	cin>>k;

	string a,b;
	cin>>a>>b;

	ll first = conversion(a,k);
	ll second = conversion(b,k);

	cout<<first*second<<endl;


	return 0;

}

