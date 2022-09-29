// Problem Link -https://www.codechef.com/problems/PINBS

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
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool result = 0;
	    if (s.size() == 1 ) {
	    	cout<<"NO"<<endl;
	    }
	    else {
	    	for(int i=0;i<s.size();i++){
	    		if (s[i]=='1' &&( s[i+1] == '0' || s[i+1] == '1' )  ){
	    			cout<<"YES"<<endl;
	                result = 1;
	                break;
	            }
	        }
	        if (result == 0) {
	        	cout<<"NO"<<endl;   
	        }
	    }
	}

	return 0;
}

