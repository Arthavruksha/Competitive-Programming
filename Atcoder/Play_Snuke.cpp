// Problem Link - https://atcoder.jp/contests/abc193/tasks/abc193_b

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

	ll n;
	cin>>n;
	ll a[n],p[n],x[n];
	for(int i=0;i<n;i++){
		cin>>a[i] >> p[i] >> x[i] ;
	}

	vector <ll> answer;

	for(int i=0;i<n;i++){
		ll temp = x[i] - a[i] ;
		if (temp >  0) answer.push_back(p[i]);
	}

	if ( answer.size() > 0 ) {
		sort(answer.begin(),answer.end());
		cout<<answer[0]<<endl;
	}
	else cout<<"-1"<<endl;


	return 0;

}

