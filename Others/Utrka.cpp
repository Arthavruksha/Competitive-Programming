// Problem Link - oj.uz/problem/view/COCI14_utrka

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

	multiset <string> arr;
	for(int i=0;i<n;i++) {
		string x;
		cin>>x;
		arr.insert(x);
	}
    
    for(int i=0;i<n-1;i++) {

    	string s;
    	cin>>s;
    	auto it = arr.find(s);
    	arr.erase(it);

    }

    for(auto it:arr) {
    	cout<<it<<endl;
    }


	return 0;
}
