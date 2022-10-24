// Problem Link - https://atcoder.jp/contests/abc189/tasks/abc189_b

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

	int n,x;
	cin>>n>>x;

	int sum = 0;

	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		sum += a*b;
		if ( sum>x*100  ) {
			cout<<i+1<<endl;
			return 0;
		}
	}

	cout<<"-1"<<endl;



	return 0;

}

