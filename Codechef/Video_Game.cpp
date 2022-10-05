// Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO14001

#include <iostream>
using namespace std;

int main() {
	int n,h;
	cin>>n>>h;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	bool bic = false;
	int pos = 0;
	while(true) {
	    int type;
	    cin>>type;
	    
	    if(type==1 && pos > 0) {
	        pos--;
	    }
	    if(type == 2 && pos < n-1) {
	        pos++;
	    }
	    if(type==3 && bic == false && arr[pos] > 0  ) {
	        bic = true;
	        arr[pos]-- ;
	    }
	    
	    if(type==4 && bic==true && arr[pos]+1 <= h ) {
	        bic = false;
	        arr[pos]++; 
	    }
	    if(type == 0){
	        break;
	    }
	}
	
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;
	
	
	return 0;
}
