// Problem Link - https://atcoder.jp/contests/abc260/tasks/abc260_c

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

	int q;
	cin>>q;

	multiset <int> s;

	for(ll i=0;i<q;i++){
		int indicator;
		cin >> indicator;
		if ( indicator == 1 ) {
		    int add;
			cin>>add;
			s.insert(add);
		}
		else if ( indicator == 2 ) {
			int x,c;
			cin>>x>>c;
			while(c-- and s.find(x) != s.end()){
				s.erase(s.find(x));
			}
		}
		else {
			cout <<  *s.rbegin() - *s.begin() << endl;
		}
	}

	return 0;

}

