// Problem Link - https://www.codechef.com/LRNDSA01/problems/LADDU?tab=statement

#include <bits/stdc++.h>
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 

void solve(){
    int n;
    string nationality;
    cin>>n>>nationality;
    int count = 0;
    for(int i=0;i<n;i++) {
        string type;
        cin>>type;
        if (type == "CONTEST_WON") {
            int rank;
            cin>>rank;
            if (rank > 20 ) count += 300;
            else count += 300 + 20 - rank;
        }
        else if (type == "TOP_CONTRIBUTOR"){
            count += 300;
        }
        else if (type == "BUG_FOUND") {
            int severity;
            cin>>severity;
            count += severity;
        }
        else if (type == "CONTEST_HOSTED") {
            count += 50;
        }
    }
    
    if (nationality == "INDIAN") {
        int ans = round(count/200);
        cout<<ans<<endl;
    }
    else {
        int ans = round(count/400);
        cout<<ans<<endl;
    }

    
}


int main() {
	OnlineJudge();
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

    return 0;
}

