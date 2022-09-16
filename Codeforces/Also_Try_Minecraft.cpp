//  Problem Link - https://codeforces.com/contest/1709/problem/B

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll; 

int main() {


	ll n,m;
	cin>>n>>m;

	ll  arr[n+1], prefix[n+1] , suffix[n+1];

	for(int i=1;i<=n;i++)cin>>arr[i];

// 	cout<<"Prefix"<<endl;

	for (int i=1;i<=n;i++) {
		prefix[0] = 0;
		prefix[i] = prefix[i-1] + max(0ll, arr[i] - arr[i+1]);
// 		cout<<prefix[i]<<endl;

	}

// 	cout<<"Suffix"<<endl;

	for (int i=n;i>0;i--) {
		suffix[n+1] = 0;
		suffix[i] = suffix[i+1] + max(0ll, arr[i] - arr[i-1]);
// 		cout<<suffix[i]<<endl;
	}

	for(int i=0;i<m;i++) {
	    
	    prefix[0] = 0;
	    suffix[n+1] = 0;
	    suffix[0] = 0;
	    
		ll s , t;
		cin>> s >> t;

		if (s < t ) {
			cout<< abs(prefix[s-1]-prefix[t-1]) <<endl;
		}
		else {
			cout<<abs(suffix[s+1]-suffix[t+1])<<endl;
			
		}

	}

    return 0;
}

