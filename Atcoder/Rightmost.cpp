// Problem Link - https://atcoder.jp/contests/abc276/tasks/abc276_a

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

	map <char,int> maps;

	ll n = s.size();

	for(int i=0;i<n;i++) maps[s[i]]++;

	if ( maps['a'] <= 0  ) cout<<"-1"<<endl;
    else {
    	for(int i=n;i>=0;i--){
    		if ( s[i] == 'a' ) {
    			cout<<i+1<<endl;
    			return 0;
    		}
    	}
    }

	
	return 0;

}

