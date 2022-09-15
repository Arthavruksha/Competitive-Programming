// Problem Link - https://judge.yosupo.jp/problem/static_range_sum

#include <bits/stdc++.h>
using namespace std;
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 


// 1 10 100 1000

// Sum until 3 - 1111

// Constraint - (2,3) (l,r) - (100,1000) - 1100

// So we will have to deduct something from it .

// Deduction = Sum until 2 - (11)

// So 1111 - 11 = 1100


int main() {
	OnlineJudge();

	long long n,q;
	cin>>n>>q;

	long long arr[n+1], dp[n+1];

	for(int i = 1;i<=n;i++) cin>>arr[i];

	dp[0] = arr[0];

    for(int i=1;i<=n;i++){
    	dp[i] = dp[i-1] + arr[i];
    }

    for(int i=0;i<q;i++){

    	long long  l,r;
    	cin>>l>>r;

    	cout<<dp[r] - dp[l]<<endl;

    }




    return 0;
}

