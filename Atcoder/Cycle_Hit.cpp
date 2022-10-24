// Problem Link - https://atcoder.jp/contests/abc211/tasks/abc211_b

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

	set <string> arr = {"3B","HR","2B","H"};

	for(int i=0;i<4;i++) {
		string s;
		cin>>s;
		arr.erase(s);
	}

	if ( arr.size() == 0 ) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


 
	return 0;

}

