// Problem Link - https://atcoder.jp/contests/abc173/tasks/abc173_b

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

	ll n;
	cin>>n;

	map <string,int> maps;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		maps[s]++;
	}

	cout << "AC x " << maps["AC"] << endl;
	cout << "WA x " << maps["WA"] << endl;
	cout << "TLE x " << maps["TLE"] << endl;
	cout << "RE x " << maps["RE"] << endl;

	return 0;

}

