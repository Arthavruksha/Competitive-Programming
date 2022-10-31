// Problem Link - https://atcoder.jp/contests/abc275/tasks/abc275_a

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
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		arr.push_back({x,i});
	}

	sort(arr.begin(),arr.end(),greater<>());

	cout<<arr[0].second<<endl;


	return 0;

}

