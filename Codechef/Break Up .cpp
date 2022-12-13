// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO15001

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


bool ispalindrome(ll i,ll j,vector <ll> arr) {
	while(j>=i) {
		if ( arr[i] == arr[j] ) {
			j--;
			i++;
		}
		else {
			return false;
		}
	}
	return true;
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n;
	cin>>n;

	vector <ll> content(n);
	for(int i=0;i<n;i++)cin>>content[i];


	// state = dp[i] = min no.of palindromes that array till ith point can be broken down into 
	// transition = 
		// 1> if not palindrome - dp[j] = i+1
		// 2> if palindrome - dp[j] = 1 
	// base case = dp[0] = 1
	// final sub-problem = dp[n-1]

	vector <ll> dp(n,1e10);

    dp[n-1] = 1;

    for(int i=(n-2);i>=0;i--){
    	for(int j=(n-1);j>=i;j--){
    		if ( ispalindrome(i,j,content) == true ) {
    			if ( j == (n-1) ) {
    				dp[i] = 1;
    			}
    			else  {
    				dp[i] = min(dp[i],dp[j+1]+1);
    			}
    		}
    	}
    }

   cout<<dp[0]<<endl;



	return 0;
}
