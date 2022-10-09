// Problem Link - https://cses.fi/problemset/task/1645/

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

	stack <pair<int,int>> st;
	vector <int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) {

		while(st.size() > 0 and st.top().first >= arr[i] ) {
			st.pop();
		}

		if (st.size() > 0) {
			cout<<st.top().second<<" ";
		}

		else cout<<"0"<<" ";

		st.push({arr[i],i+1});

	}
 

	return 0;
}
