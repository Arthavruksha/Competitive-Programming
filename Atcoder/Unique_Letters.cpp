// Problem Link - https://atcoder.jp/contests/abc260/tasks/abc260_a


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

	map<char,int> m;

	for(int i=0;i<3;i++) {
		m[s[i]]++;
	}

	int count = 0;

	for(int i=0;i<3;i++){
		if ( m[s[i]] >= 2  ){
			continue;
		}
		else {
			cout<<s[i]<<endl;
			count = 1;
			break;
		}
	}

	if (count == 0)cout<<"-1"<<endl;


	return 0;
}
