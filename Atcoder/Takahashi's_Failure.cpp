// Problem Link - https://atcoder.jp/contests/abc252/tasks/abc252_b

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

	int n,k;
	cin>>n>>k;

	int a[n] , b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<k;i++)cin>>b[i];

	int maxvalue = -1;

    for(int i=0;i<n;i++) maxvalue = max(maxvalue,a[i]);

    for(int i=0;i<k;i++){
    	if ( a[b[i]-1] == maxvalue ) {
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    }

    cout<<"No"<<endl;
	
	return 0;

}

