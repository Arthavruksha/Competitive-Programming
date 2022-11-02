// Problem Link - https://atcoder.jp/contests/abc265/tasks/abc265_c

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

	ll h,w;
	cin>>h>>w;

	char arr[h+1][w+1];

	for(ll i=1;i<=h;i++){
		for(ll j=1;j<=w;j++){
			cin>>arr[i][j];
		}
	}

	ll x=1,y=1;

	for(ll i=1;i<=(h*w);i++){

			if (arr[x][y] == 'U'){
				if ( x != 1 ) x--;
				else {cout<<x<<" "<<y<<endl;return 0;};
			}
			else if (arr[x][y] == 'D'){
				if ( x != h ) x++;
				else {cout<<x<<" "<<y<<endl;return 0;};
			}
			else if (arr[x][y] == 'L'){
				if ( y != 1 ) y--;
				else {cout<<x<<" "<<y<<endl;return 0;};
			}
			else if (arr[x][y] == 'R'){
				if ( y != w ) y++;
				else {cout<<x<<" "<<y<<endl;return 0;};
			}
	}

	cout << "-1" << endl;


	return 0;

}

