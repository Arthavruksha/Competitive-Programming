// Problem Link - https://atcoder.jp/contests/abc171/tasks/abc171_b

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

	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	sort(arr,arr+n);
    
    int sum = 0;

    for(int i=0;i<k;i++){
    	sum += arr[i];
    }

    cout<<sum<<endl;

	return 0;

}

