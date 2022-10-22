// Problem Link - https://atcoder.jp/contests/abc241/tasks/abc241_b

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

	int n,m;
	cin>>n>>m;

	map <int,int> maps;
	vector <int> b(m);

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		maps[x]++;
	}

	for(int i=0;i<m;i++) cin>>b[i];

	for(int i=0;i<m;i++){
		if ( maps[b[i]] == 0 ) {
			cout<<"No"<<endl;
			return 0;
		}
		maps[b[i]]--;
	}

	cout<<"Yes"<<endl;



	return 0;

}

