// Problem Link - https://www.codechef.com/LRNDSA02/problems/PSHOT

#include <bits/stdc++.h>
using namespace std;

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0;
    int b = 0;
    int ans = 2*n;
    int ca =n;
    int cb =n;
    for(int i=0;i<2*n;i++) {
        if (i%2==0) ca--;
        else cb--;
        
        if ( s[i] =='1' and i%2==0 ) a++;
        if ( s[i] == '1' and i%2 != 0 ) b++;
        
        if( a-b > cb ) {
            ans = i+1;
            break;
        }
        
        else if( b-a > ca) {
            ans = i+1;
            break;
        }
        
    }
    
    cout<<ans<<endl;
    
    
}


int main() {
	OnlineJudge();
	int t;
	cin>>t;
	while(t--) solve();

    return 0;
}

