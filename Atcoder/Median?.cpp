// Problem Link - https://atcoder.jp/contests/abc253/tasks/abc253_a

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
	int a = 0,b =0 , c=0;
	for(int i=0;i<3;i++) {
		int j;
		cin>>j;
		arr[i] = j;
		if(i==0)a=j;
		else if(i==1)b=j;
		else if (i==2)c=j;
	}

	sort(arr,arr+3);

	if (arr[1] == b )cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	

	return 0;
}
