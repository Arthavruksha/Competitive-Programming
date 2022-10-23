// Problem Link - https://atcoder.jp/contests/abc219/tasks/abc219_b

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

	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;

	int n = s4.size();

	for(int i=0;i<n;i++){
		if ( s4[i]  == '1' ) cout<<s1;
		else if ( s4[i] == '2' ) cout<<s2;
		else if ( s4[i] == '3' ) cout<<s3;
	}

	return 0;

}

