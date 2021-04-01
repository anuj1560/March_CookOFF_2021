//https://www.codechef.com/problems/SVRT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	   int n,k;
	    cin >>n>>k;
	    if(n%k==0)
	      cout<<n/k<<" "<<k<<"\n";
	    else
	        cout<<n/k+1<<" "<<n - (n/k)*k<<"\n";
	    }
	return 0;
}
