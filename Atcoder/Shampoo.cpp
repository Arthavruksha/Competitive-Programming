// Problem Link - https://atcoder.jp/contests/abc243/tasks/abc243_a

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

	int v,a,b,c;
	cin>>v>>a>>b>>c;

	while (true){
		if (v<a) {
			cout<<"F"<<endl;
			break;
		}
		v-=a;
	    if (v<b) {
			cout<<"M"<<endl;
			break;
		}
		v-=b;
		if (v<c){
			cout<<"T"<<endl;
			break;
		}
		v-=c;

	}

	return 0;
}
