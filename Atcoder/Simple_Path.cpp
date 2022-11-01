// Problem Link - https://atcoder.jp/contests/abc270/tasks/abc270_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

vector<int> bigone[200005];
vector<int> ans;
bool vis[200005];
bool fin;
 
void bfs(int x,int y){
	if (!fin) ans.push_back(x);

	if (x==y) fin=true;
	vis[x] = true;
	for ( auto i: bigone[x] ) if (!vis[i]) bfs(i,y);

	if(!fin) ans.pop_back();
    return;

}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	int n,x,y;
	cin>>n>>x>>y;
	x-- , y -- ;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		a-- , b--;
		bigone[a].push_back(b);
		bigone[b].push_back(a);
	}

	for(int i = 0; i < n; i++) vis[i] = false;

	bfs(x,y);

	for( auto i : ans) cout<< i + 1<<" ";
	cout<<endl;


	return 0;

}

