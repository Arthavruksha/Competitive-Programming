// Problem Link - https://atcoder.jp/contests/abc281/tasks/abc281_b

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

	string s;
	cin>>s;

	int n = s.size();

	if ( n!=8 ) {
		cout<<"No"<<endl;
		return 0;
	}

	if ( isupper(s[0]) ) {
		if ( isupper(s[n-1]) ) {
			string temp =  s.substr(1,n-2);

			for(int i=0;i<(temp.size());i++){
				if ( isdigit(temp[i]) ) {
					continue;
				}
				else {
					cout<<"No"<<endl;
					return 0;
				}
			}

			int tempn = stoi(temp);

			if ( tempn>=100000 and tempn<=999999 ) {
				cout<<"Yes"<<endl;
				return 0;
			}
			else {
				cout<<"No"<<endl;
				return 0;
			}
		}

		else {
			cout<<"No"<<endl;
			return 0;
		}
	}

	else {
		cout<<"No"<<endl;
		return 0;
	}


	return 0;
}
