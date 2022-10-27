// Problem Link - https://atcoder.jp/contests/abc146/tasks/abc146_b

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

	string s;
	cin>>s;

	int size = s.size();

	for(int i=0;i<size;i++){
		int temp  =  s[i] + n ; 
		if (temp>90) {
			int temp1 = temp - 90;
			int temp2 = 64 + temp1 ;
			cout<< char(temp2) ;
		}
		else cout << char(temp) ;
	}


	return 0;

}

