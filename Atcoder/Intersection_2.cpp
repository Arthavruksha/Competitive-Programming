// Problem Link - https://atcoder.jp/contests/abc199/tasks/abc199_b

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

	int a[n],b[n];

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	int count= 0;

	for(int i=1;i<=1000;i++){
		bool ok = true;
		for(int j=0;j<n;j++){
			if ( a[j] > i or i > b[j] ) ok = false;
		}
		if (ok)count++;
	}

	cout<<count<<endl;
	

 
	return 0;

}

