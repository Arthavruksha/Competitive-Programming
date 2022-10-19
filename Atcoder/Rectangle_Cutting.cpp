// Problem Link - https://atcoder.jp/contests/abc269/tasks/abc269_b

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

	char arr[11][11];

	for(int i=1;i<=10;i++) {
		for(int j=1;j<=10;j++) {
			cin>>arr[i][j];
		}
	}

	int a = 1e7 ;
	int c = 1e7 ;
	int b = -1e7 ;
	int d = -1e7 ;

	for(int i=1;i<=10;i++) {
		for(int j=1;j<=10;j++) {
			if (  arr[i][j] == '#' ) {
				c = min(j,c);
				a = min(i,a);
				d = max(j,d);
				b = max(i,b);
			}
		}
	}

	cout<<a<<" "<<b<<endl;
	cout<<c<<" "<<d<<endl;



	return 0;

}
