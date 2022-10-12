// Problem Link - https://atcoder.jp/contests/abc263/tasks/abc263_a


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
    
    int arr[5];
    for(int i=0;i<5;i++)cin>>arr[i];
    sort(arr,arr+5);

    
    if((arr[0] == arr[2] and arr[3] == arr[4]) or (arr[0] == arr[1] and arr[2] == arr[4])) {
    	cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
	



	return 0;
}
