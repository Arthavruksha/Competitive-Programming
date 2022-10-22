// Problem Link - https://atcoder.jp/contests/abc274/tasks/abc274_b

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

	char arr[h][w];

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<w;i++){
		int count = 0;
		for(int j=0;j<h;j++){
			if (  arr[j][i] == '#' ) count++;
		}
		cout<<count<<" ";

	}

	cout<<endl;



	return 0;

}

