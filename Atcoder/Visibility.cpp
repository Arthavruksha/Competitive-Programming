// Problem Link - https://atcoder.jp/contests/abc197/tasks/abc197_b

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

	int h,w,x,y;
	cin>>h>>w>>x>>y;
	
	char arr[h+1][w+1];
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>arr[i][j];
		}
	}
	int count = -3;

	for(int i=x;i<=h;i++){
		if (arr[i][y] == '#') break;
		else count++;
	}
	for(int i=x;i>0;i--){
		if (arr[i][y] == '#') break;
		else count++;
	}
	for(int i=y;i<=w;i++){
		if (arr[x][i] == '#') break;
		else count++;
	}
	for(int i=y;i>0;i--){
		if (arr[x][i] == '#') break;
		else count++;
	}

	cout<<count<<endl;


 
	return 0;

}

