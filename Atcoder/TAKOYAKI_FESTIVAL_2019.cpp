// Problem Link - https://atcoder.jp/contests/abc143/tasks/abc143_b

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

	int arr[n];

	for(int i=0;i<n;i++)cin>>arr[i];
	int sum = 0;

    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		sum += arr[i]*arr[j];
    	}
    }

    cout<<sum<<endl;


	return 0;

}

