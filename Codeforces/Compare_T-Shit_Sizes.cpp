// Problem Link - https://codeforces.com/contest/1741/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


void solve() {

	string a,b;
	cin>>a>>b;

	int firstmax = 0, secondmax= 0 ;
	int firstxc = 0;
	int secondxc = 0;

	for(int i=0;i<a.size();i++) {

		if (a[i] == 'S') firstmax = 1;
		else if (a[i] == 'L') firstmax = 3;
		else if (a[i] == 'M') firstmax = 2;
		else firstxc++;

	}
	for(int i=0;i<b.size();i++) {

		if (b[i] == 'S') secondmax = 1;
		else if (b[i] == 'L') secondmax = 3;
		else if (b[i] == 'M') secondmax = 2;
		else secondxc++;

	}

	if (firstmax > secondmax) {
		cout<<">"<<endl;
	}
	else if (secondmax > firstmax) {
		cout<<"<"<<endl;
	}
	else if (firstmax == secondmax) {
		if (firstmax == 1) {
			if (firstxc > secondxc) cout<<"<"<<endl;
			else if (firstxc < secondxc) cout<<">"<<endl;
			else if (firstxc == secondxc ) cout<<"="<<endl;
		}
		else if (firstmax == 3) {
			if (firstxc > secondxc) cout<<">"<<endl;
			else if (firstxc < secondxc) cout<<"<"<<endl;
			else if (firstxc == secondxc ) cout<<"="<<endl;			
		}
		else if (firstmax == 2) {
			if (firstxc > secondxc) cout<<">"<<endl;
			else if (firstxc < secondxc) cout<<"<"<<endl;
			else if (firstxc == secondxc ) cout<<"="<<endl;	
			else cout<<"="<<endl;		
		}
	}


}





int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();


	return 0;
}
