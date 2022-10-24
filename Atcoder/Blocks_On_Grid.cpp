// Problem Link - https://atcoder.jp/contests/abc186/tasks/abc186_b

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

	int smallest = 1e7;

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>arr[i][j];
			smallest = min(smallest,arr[i][j]);
		}
	}

	int ans = 0;

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int temp =  (arr[i][j] - smallest);
			ans += temp;

		}
	}

	cout<<ans<<endl;



	return 0;

}

