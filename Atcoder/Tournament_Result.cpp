// Problem Link - https://atcoder.jp/contests/abc261/tasks/abc261_b

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

	char arr[n+1][n+1];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}

	int given = 0;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=n;j++){

			if (i==j) continue;

			else if ( arr[i][j] == 'W' ) {

				if ( arr[j][i] != 'L' ) {
					cout<<"incorrect"<<endl;
					return 0;
				}

			}
			else if ( arr[i][j] == 'L' ) {

				if ( arr[j][i] != 'W' ) {
					cout<<"incorrect"<<endl;
					return 0;
				}

			}
			else if ( arr[i][j] == 'D' ) {

				if ( arr[j][i] != 'D' ) {
					cout<<"incorrect"<<endl;
					return 0;
				}

			}


		}

	}

	cout<<"correct"<<endl;




	return 0;

}
