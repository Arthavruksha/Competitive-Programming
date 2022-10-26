// Problem Link - https://atcoder.jp/contests/abc157/tasks/abc157_b

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

	ll arr[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}

	ll n;
	cin>>n;
	vector <ll> numbers(n);

	for(int i=0;i<n;i++)cin>>numbers[i];

	ll finalarr[3][3];

    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		auto it = find(numbers.begin(),numbers.end(),arr[i][j]);
    		if (it != numbers.end()) {
    			finalarr[i][j] =  1;
    		}
    		else finalarr[i][j] = 0;
    	}
    }

    // for(int i=0;i<3;i++){
    // 	for(int j=0;j<3;j++){
    // 		cout<<finalarr[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }

    for(int i=0;i<3;i++){
    	if ( finalarr[i][0] == 1 and finalarr[i][1] == 1 and finalarr[i][2] == 1 ) {
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    	if ( finalarr[0][i] == 1 and finalarr[1][i] == 1 and finalarr[2][i] == 1 ) {
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    }

    if ( finalarr[0][0] == 1 and finalarr[1][1] == 1 and finalarr[2][2] == 1 ) {
    	cout<<"Yes"<<endl;
    	return 0;
    }

    if ( finalarr[0][2] == 1 and finalarr[1][1] == 1 and finalarr[2][0] == 1 ) {
    	cout<<"Yes"<<endl;
    	return 0;
    }

    cout<<"No"<<endl;





	return 0;

}

