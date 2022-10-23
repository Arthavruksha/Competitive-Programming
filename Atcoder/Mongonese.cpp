// Problem Link - https://atcoder.jp/contests/abc224/tasks/abc224_b

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

	int h,w;
	cin>>h>>w;

	int arr[h+1][w+1];

	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=1;i<h;i++){
		for(int j=1;j<w;j++){
			if ( (arr[i][j] + arr[i+1][j+1]) <= (arr[i+1][j] + arr[i][j+1]) ) continue;
			else {cout<<"No"<<endl;return 0; }
		}
	}

	cout<<"Yes"<<endl;

	return 0;

}

