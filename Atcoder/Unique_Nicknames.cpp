// Problem Link - https://atcoder.jp/contests/abc247/tasks/abc247_b

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

	map <string,int> name,family;

	vector<pair<string,string>> arr;

	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		name[a]++;
		family[b]++;
		arr.push_back({a,b});
	}

	for(int i=0;i<n;i++){
		if ( name[arr[i].first] == 1 and family[arr[i].first] == 0 ) continue;
		if ( name[arr[i].second] == 0 and family[arr[i].second] == 1 ) continue;
		if ( arr[i].first == arr[i].second and name[arr[i].second] == 1 and family[arr[i].second]  == 1 ) continue;
		cout<<"No"<<endl;
		return 0;
	}

	cout<<"Yes"<<endl;


	return 0;

}

