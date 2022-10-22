// Problem Link - https://atcoder.jp/contests/abc236/tasks/abc236_b

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

	int arr[4*n];

	map <int,int> maps;

	for(int i=0;i<((4*n)-1);i++){
		int x;
		cin>>x;
		maps[x]++;
		arr[i] = x;
	}

	for(int i=0;i<((4*n)-1);i++){
		if ( maps[arr[i]] == 3) {
			cout<<arr[i]<<endl;
			break;
		}
		else continue;
	}



	return 0;

}

