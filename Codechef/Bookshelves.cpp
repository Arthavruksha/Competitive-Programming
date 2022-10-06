// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO16001

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int solve(vector<int> a , vector <int> b ,int k) {
	int n = a.size();
	for(int i=1;i<=k;i++) {
		swap(a[0],b[n-1]);
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
	}
	return a[n-1] + b[n-1];
}

int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector <int> a (n), b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = min(solve(a,b,k),solve(b,a,k));
    cout<<ans<<endl;


	return 0;
}
