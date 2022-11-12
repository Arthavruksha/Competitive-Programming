// Problem Link - https://atcoder.jp/contests/abc277/tasks/abc277_b

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

	string arr[n];

	map <string,int> maps;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		arr[i] = s;
		maps[s]++;
	}

	for(int i=0;i<n;i++){
		if ( arr[i][0] != 'H' and arr[i][0] != 'D' and arr[i][0] != 'C' and arr[i][0] != 'S' ) {
			cout<<"No"<<endl;
			return 0;
		}
		if ( arr[i][1] != 'A' and arr[i][1] != '2' and arr[i][1] != '3' and arr[i][1] != '4' and arr[i][1] != '5' and arr[i][1] != '6' and arr[i][1] != '7' and arr[i][1] != '8' and arr[i][1] != '9' and arr[i][1] != 'T' and arr[i][1] != 'J' and arr[i][1] != 'Q' and arr[i][1] != 'K') {
			cout<<"No"<<endl;;
			return 0;
		}
		if ( maps[arr[i]] > 1 ) {
			cout<<"No"<<endl;
			return 0;
		} 
	}

	cout<<"Yes"<<endl;


	return 0;
}

