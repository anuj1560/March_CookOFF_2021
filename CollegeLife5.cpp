// https://www.codechef.com/problems/COLGLF5
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,m;
	    cin >>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	     cin >>a[i];
	    for(int i=0;i<m;i++)
	     cin >>b[i];
	    int i=0,j=0;
	    int count=0;
	    int flag=0;
	    
	    while(i<n && j<m){
	        if(a[i]<b[j])
	        {
	          if(flag==1){
	            flag=1-flag;
	            count++;
	         }
	         i++;
	        }
	        else{
	            if(flag==0){
	                flag=1-flag;
	                count++;
	            }
	            j++;
	        }
	    }
	    
	    if(i==n){
	        if(flag==0)
	          count++;;
	    }
	    else{
	        if(flag==1)
	          count++;
	    } 
	       cout<<count<<"\n";
	}
	return 0;
}
