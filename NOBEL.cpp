#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,m;
	    cin >>n>>m;
	    int a[n];
	    int b[m];
	    for(int i=0;i<n;i++)
	      cin >>a[i];
	    for(int i=1;i<=m;i++)
	      b[i]=1;
	    for(int i=0;i<n;i++){
	        b[a[i]]--;
	    }
	    int j;
	    int flag =1;
	    for(j=1;j<=m;j++){
	        if(b[j]>0){
	         cout<<"Yes"<<"\n";
	         flag=0;
	         break;
	        }
	    }
	    if(j==m+1 && flag==1)
	    cout<<"No"<<"\n";
	    
	}
	return 0;
}
