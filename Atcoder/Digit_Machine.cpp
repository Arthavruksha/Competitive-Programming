// Problem Link - https://atcoder.jp/contests/abc241/tasks/abc241_a

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

	int arr[10];
	for(int i=0;i<=9;i++)cin>>arr[i];

	int value = 0;

    for(int i=0;i<3;i++) {
    	value = arr[value];
    }

	cout<<value<<endl;



	return 0;
}
