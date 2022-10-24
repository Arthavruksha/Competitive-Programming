// Problem Link - https://atcoder.jp/contests/abc200/tasks/abc200_b

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

	while(k--){
		if (n%200 == 0) {
			n/=200;
		}
		else {
			string temp = to_string(n) + "200";
			n = stoll(temp);
		}
	}

	cout<<n<<endl;


 
	return 0;

}

