// Problem Link - https://atcoder.jp/contests/abc201/tasks/abc201_a

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

	int arr[3];
	for(int i=0;i<3;i++)cin>>arr[i];

	sort(arr,arr+3);

    if ( arr[0]-arr[1] == arr[1]-arr[2] ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

	return 0;
}
