#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    
	    if ( x < (n-x) ) {
	        cout<<x<<endl;
	    }
	    else {
	        cout<<n-x<<endl;
	    }
	    
	}

    return 0;
}
