// Problem Link - https://atcoder.jp/contests/abc261/tasks/abc261_a

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

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	vector <int> arr(d,0);

	for(int i=a;i<b;i++) {
		arr[i]++;
	}
	for(int i=c;i<d;i++){
		arr[i]++;
	}
	int count = 0;
	for(int i=a;i<d;i++) {
		if (arr[i] >= 2) {
			count++;
		}
	}

	cout<<count<<endl;

	return 0;
}
