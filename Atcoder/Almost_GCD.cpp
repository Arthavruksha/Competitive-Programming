// Problem Link - https://atcoder.jp/contests/abc182/tasks/abc182_b

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

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	vector <pair<int,int>> dp;

    for(int i=2;i<=1000;i++) {
    	int count = 0 ;
    	for(int j=0;j<n;j++){
    		if ( arr[j]%i == 0 ) count++;
    	}
    	dp.push_back({count,i});
    }

    sort(dp.begin(),dp.end(),greater<>());

    cout<<dp[0].second<<endl;

	return 0;

}

