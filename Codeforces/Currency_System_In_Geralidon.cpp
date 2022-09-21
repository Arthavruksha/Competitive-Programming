// Problem Link - https://codeforces.com/contest/560/problem/A 


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

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		if ( arr[i] == 1 ){
			cout<<"-1"<<endl;
			return 0;
		}
	}cout<<"1"<<endl;


    return 0;
}

