// Problem Link - https://atcoder.jp/contests/abc201/tasks/abc201_b

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

	vector <pair<int,string>> arr;

	for(int i=0;i<n;i++){
		int x;
		string y;
		cin>>y>>x;
		arr.push_back({x,y});
	}

	sort(arr.begin(),arr.end(),greater<>());

	cout<<arr[1].second<<endl;

 
	return 0;

}

