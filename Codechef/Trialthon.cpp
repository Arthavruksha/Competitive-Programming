// Problem Link - https://www.codechef.com/INOIPRAC/problems/INOI1201

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector <pair<int,int>> arr;
	for(int i=0;i<n;i++) {
	    int a, b,c;
	    cin>>a>>b>>c;
	    arr.push_back({b+c,a});
	}
	sort(arr.rbegin(),arr.rend());
	vector<int> prefixsum(n+1);
	
	for(int i=0;i<n;i++) {
	    prefixsum[i+1] = prefixsum[i] + arr[i].second;
	}
	
	int ans = 0;
	
	for(int i=0;i<n;i++) {
	    ans = max(ans, prefixsum[i+1]  + arr[i].first ); 
	}
	
	cout<<ans<<endl;
	
	return 0;
}
