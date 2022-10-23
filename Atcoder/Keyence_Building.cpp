// Problem Link - https://atcoder.jp/contests/abc227/tasks/abc227_b

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

	vector <int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
    int count = 0;

	for(int i=0;i<n;i++){
		int flag = 0;
		for(int a=1;a<=1000;a++){
			for(int b=1;b<=1000;b++){
				int ans = (4*a*b) + (3*a) + (3*b);
				if (ans == arr[i]) flag = 1;
			}
		}
		if ( flag == 0  ) count++;
	}

	cout<<count<<endl;

	return 0;

}

