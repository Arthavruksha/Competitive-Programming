// Problem Link - https://atcoder.jp/contests/abc214/tasks/abc214_b
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

	ll s,t;
	cin>>s>>t;

	ll ways = 0;

	for(int i=0;i<=s;i++){
		for(int j=0;j<=s;j++){
			for(int k=0;k<=s;k++){
				if (  ((i+j+k) <= s) and ((i*j*k) <=t )   ) ways++;
			}
		}
	}

	cout<<ways<<endl;


 
	return 0;

}

