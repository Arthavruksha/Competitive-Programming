//  Problem Link - http://www.usaco.org/index.php?page=viewproblem2&cpid=639

#include <bits/stdc++.h>
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 


int main() {
	OnlineJudge();

	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);

	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
    int ans  = 0;
	for (int i=0;i<n;i++ ) {
		for(int j=i;j<n;j++) {

			if ( arr[j] - arr[i] <= k ){
				ans = max(ans,j-i+1);
			}

		}
	}

	cout<<ans<<endl;
	
    return 0;
}

