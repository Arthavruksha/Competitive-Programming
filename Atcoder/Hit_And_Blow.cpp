// Problem Link - https://atcoder.jp/contests/abc243/tasks/abc243_b

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

	int a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

	int first = 0, second = 0;
    
    for(int i=0;i<n;i++){
    	if ( a[i] == b[i] ) first++;
    }

    for(int i=0;i<n;i++) {
    	for(int j=0;j<n;j++){
    		if (i==j) continue;
    		else {
    			if ( a[i] == b[j] ) second++;
    		}
    	}
    }

    cout << first << endl;
    cout << second << endl; 


	return 0;

}

