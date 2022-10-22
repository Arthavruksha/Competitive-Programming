// Problem Link - https://atcoder.jp/contests/abc231/tasks/abc231_b

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

	map <string,int> maps;
	string arr[n];

	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		arr[i] = s;
		maps[s]++;
	}

	int maxi = 0;
	int maxfrequency = 0;

	for(int i=1;i<n;i++){
		if ( maps[arr[i]] > maxfrequency )  {
			maxfrequency = maps[arr[i]];
			maxi = i;
		}
	}

	cout << arr[maxi] << endl;

	return 0;

}

