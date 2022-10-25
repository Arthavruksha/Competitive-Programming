// Problem Link - https://atcoder.jp/contests/abc159/tasks/abc159_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


bool palindrome (string s){
	int n = s.size();

	int l = 0;
	int r = n-1;

	bool palindrome1 = true;

	while(l<r){
		if (s[l] != s[r]) palindrome1 = false;
		l++;
		r--;
	}

	if (palindrome1 == true) return  true;
	else return false;
}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	string s;
	cin>>s;

	int len = s.size();

	string first =  s.substr(0, ((len-1)/2) ) ;

	string second = s.substr( (((len+3)/2)-1), len ) ;

	if ( ( palindrome(s) == false ) or ( palindrome(first) == false ) or  ( palindrome(second) == false ) ) {
		cout<<"No"<<endl;
	}
	else cout<<"Yes"<<endl;



	return 0;

}

