// Problem Link - https://atcoder.jp/contests/abc232/tasks/abc232_b

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

	for(int i=0;i<=25;i++){
		string s = a;
		for(int j=0;j<n;j++){
			s[j] = ((s[j]-'a')+i)%26 + 'a';
		}
		if (s==b) {
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;



	return 0;

}

