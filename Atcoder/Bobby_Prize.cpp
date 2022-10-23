// Problem Link - https://atcoder.jp/contests/abc213/tasks/abc213_b

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
	int arr2[n];
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    arr[i] =x;
	    arr2[i] = x;
	}

	sort(arr,arr+n,greater<int>());

    int final = arr[1];

    auto it = find(arr2,arr2+n,final);
    
    cout << distance(arr2,it) + 1 << endl;


 
	return 0;

}

