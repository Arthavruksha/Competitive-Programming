// Problem Link - https://atcoder.jp/contests/abc218/tasks/abc218_b

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

	int arr[26];

	for(int i=0;i<26;i++)cin>>arr[i];
	for(int i=0;i<26;i++){
		char temp = char(arr[i]+64);
		cout<<(char)tolower(temp);
	}


	return 0;

}

