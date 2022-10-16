// Problem Link - https://atcoder.jp/contests/abc219/tasks/abc219_a

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

	if (n>=0 and n<40) cout<<40-n<<endl;
	else if (n>=40 and n<70) cout<<70-n<<endl;
	else if (n>=70 and n<90 ) cout<<90-n<<endl;
	else if (n>=90)cout<<"expert"<<endl;

	return 0;
}
