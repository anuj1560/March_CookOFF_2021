#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    for(int i=1;i<=1000;i++){
	        cout<<i*i<<endl;
	        int temp;
	        cin>>temp;
	        if(temp==1)
	          goto end;
	     }
	     end:
	     continue;
	}
	return 0;
}
