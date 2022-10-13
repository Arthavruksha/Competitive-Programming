// Problem Link - https://codeforces.com/contest/1742/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solve(){
	char arr[8][8];

	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>arr[i][j];
			if (arr[i][j] == 'R') arr[i][j] =1;
			else if (arr[i][j] == 'B')arr[i][j] =0;
			else arr[i][j] =-11;
		}
	}


	for(int i=0;i<8;i++){
		int sum = 0;
		for(int j=0;j<8;j++) {
			sum+=arr[i][j];
		}

		if(sum==8) {
			cout<<"R"<<endl;
			break;
		}
	}

	for(int i=0;i<8;i++){
		int sum = 0;
		for(int j=0;j<8;j++) {
			sum+=arr[j][i];
		}

		if(sum==0) {
			cout<<"B"<<endl;
			break;
		}
	}
	


}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();



	return 0;
}
