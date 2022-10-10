// Problem Link - http://www.usaco.org/index.php?page=viewproblem2&cpid=567

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);

	ll a,b,c,d;
	cin>>a>>b>>c>>d;

	vector <bool> arr(100);

	for(int i=a;i<b;i++) {
		arr[i] = true;
	}
	for(int i=c;i<d;i++) {
		arr[i] = true;
	}

	int ans = 0;

	for(int i=0;i<arr.size();i++) {
		ans += arr[i];
	}

	cout<<ans<<endl;

	return 0;
}
