// Problem Link - https://atcoder.jp/contests/abc216/tasks/abc216_b

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

	vector <pair<string,string>> arr;

	for(int i=0;i<n;i++){
		string x,y;
		cin>>x>>y;
		arr.push_back({x,y});
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i==j) continue;
			else {
				if ( (arr[i].first  == arr[j].first) and ( arr[i].second == arr[j].second ) ) {
					cout<<"Yes"<<endl;
					return 0;
				}
			}
		}

	}

	cout<<"No"<<endl;


 
	return 0;

}

