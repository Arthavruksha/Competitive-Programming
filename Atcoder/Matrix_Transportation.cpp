// Problem Link - https://atcoder.jp/contests/abc237/tasks/abc237_b

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

	int arr[h][w];

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<w;i++){
		for(int j=0;j<h;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}



	return 0;

}

