// Problem Link - https://atcoder.jp/contests/abc221/tasks/abc221_b

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

	string a,b;
	cin>>a>>b;

	int n = a.size();

	if (a==b){cout<<"Yes"<<endl;return 0;}

	for(int i=0;i<n;i++){
		string s1 = a;
		swap(s1[i],s1[i+1]);
		if (s1 == b) {cout<<"Yes"<<endl;return 0;}
	}

	cout<<"No"<<endl;

	return 0;

}

