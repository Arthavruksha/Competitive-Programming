// Problem Link - https://atcoder.jp/contests/abc225/tasks/abc225_b

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

	vector <pair<int,int>> arr;

	map <int,int> maps;

	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		maps[a]++;
		maps[b]++;
		arr.push_back({a,b});
	}

	for(int i=0;i<n-1;i++) {
		if ( (maps[arr[i].first] == n-1) or (maps[arr[i].second] == n-1) ) {
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;



	return 0;

}

