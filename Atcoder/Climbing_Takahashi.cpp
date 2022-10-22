// Problem Link - https://atcoder.jp/contests/abc235/tasks/abc235_b

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

	int arr[n];

	for(int i=0;i<n;i++)cin>>arr[i];

	for(int i=0;i<n;i++){
		if ( arr[i] < arr[i+1] ) {
			continue;
		}
		else {
			cout << arr[i] << endl;
			return 0;
		}
	}

	cout << arr[n-1] << endl;



	return 0;

}

