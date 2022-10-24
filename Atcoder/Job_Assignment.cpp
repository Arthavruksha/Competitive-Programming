// Problem Link - https://atcoder.jp/contests/abc194/tasks/abc194_b

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

	vector <pair<int,int>> arr;

	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		arr.push_back({x,y});
	}

	vector <int> answers;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i==j) answers.push_back(arr[i].first + arr[i].second);
			else answers.push_back(max(arr[i].first ,arr[j].second ));
		}
	}

	sort(answers.begin(),answers.end());

	cout<<answers[0]<<endl;


	return 0;

}

