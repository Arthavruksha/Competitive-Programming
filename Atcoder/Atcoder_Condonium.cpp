// Problem Link - https://atcoder.jp/contests/abc203/tasks/abc203_b

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

	ll n,k;
	cin>>n>>k;

	ll sum = 0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			string temp =  to_string(i) + "0" + to_string(j);
			sum += stoi(temp);
		}
	}

	cout<<sum<<endl;


 
	return 0;

}

