// Problem Link - https://atcoder.jp/contests/abc251/tasks/abc251_b

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

	int n,w;
	cin>>n>>w;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	vector <int> dp(w+1,0);

    for(int i=0;i<n;i++){
    	int temp = arr[i];
    	if (temp <= w) dp[temp] = 1;
    }

    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		int temp = arr[i] + arr[j];
    		if (temp <= w) dp[temp] = 1;
    	}
    }

    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		for(int k=j+1;k<n;k++){
    			int temp = arr[i] + arr[j] + arr[k];
    		    if (temp <= w) dp[temp] = 1;
    		}
    	}
    }

    int count = 0;

    for(int i=0;i<=w;i++){
    	count += dp[i];
    }

    cout<<count<<endl;


	return 0;

}
