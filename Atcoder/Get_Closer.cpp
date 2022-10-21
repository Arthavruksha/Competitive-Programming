// Problem Link - https://atcoder.jp/contests/abc246/tasks/abc246_b

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

	float a,b;
	cin>>a>>b;

	double aradhaya = a*a + b*b;
	aradhaya = sqrt(aradhaya);

	cout<<setprecision(8);

	cout<< a/aradhaya << " " << b/aradhaya << endl;


	return 0;

}

