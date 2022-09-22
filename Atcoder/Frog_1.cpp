//  Problem Link - https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
using namespace std;
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 
 
// state = dp[i] = minimum cost to travel till dp[i] .
 
// transition = dp[i] = abs(arr[i]-dp[i-1]) + abs(arr[i]-dp[i-2]) .
 
// base case = dp[1] = arr[1] & dp[2] = arr[2]
 
// final subproblem = dp[n]
 
int main() {
	OnlineJudge();
 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	vector <int> dp(n);
 
    dp[0] = 0;
    dp[1] = abs(arr[1] - arr[0]);
 
    for(int i=2;i<n;i++ ){
 
    	dp[i] = min( dp[i-1]  + abs(arr[i]-arr[i-1]) , dp[i-2]+ abs(arr[i]-arr[i-2]) );
 
    }
 
    cout<<dp[n-1]<<endl;
 
    return 0;
}
 
