// Problem Link - https://atcoder.jp/contests/abc241/tasks/abc241_c

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

	ll n;
	cin>>n;

	vector <string> arr;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		arr.push_back(s);
	}

	ll count = 0;


	for(int i=0;i<n;i++){
		ll count = 0;
		for(int j=0;j<n;j++){
			if ( (i + 5) < n ) {
			    count = 0; 
				for(int k=0;k<6;k++){
					if ( arr[i+k][j] == '#' ) count++;
				}
				if ( count>=4 ) {
					cout<<"Yes"<<endl;
					return 0;
				}
			}
			if ( (j + 5) < n ) {
			    count = 0; 
				for(int k=0;k<6;k++){
					if ( arr[i][j+k] == '#' ) count++;
				}
				if ( count>=4 ) {
					cout<<"Yes"<<endl;
					return 0;
				}
			}

			if ( (i+5)<n and (j+5)<n ) {
			    count = 0; 
				for(int k=0;k<6;k++){
					if ( arr[i+k][j+k] == '#' ) count++;
				}
				if ( count>=4 ) {
					cout<<"Yes"<<endl;
					return 0;
				}			
			}

			if ( (0 <= ( i-5 ) ) and ( ( j+5 ) < n ) ) {
			    count = 0; 
				for(int k=0;k<6;k++){
					if ( arr[i-k][j+k] == '#' ) count++;
				}
				if ( count>=4 ) {
					cout<<"Yes"<<endl;
					return 0;
				}					
			}

		}
	}

	cout<<"No"<<endl;


	return 0;
}

