// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO15002

#include <bits/stdc++.h>
 
using namespace std;

int main() {
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    
    int count =0;
    for(int i=0;i<n;i++){ 
        for(int j=i;j<n;j++){
            if ( abs(arr[i]-arr[j]) >= k ) {
                count += (n-j) ;
                break;
            }
        }
    }
    
    cout<<count<<endl;
    
    
	return 0;
}
