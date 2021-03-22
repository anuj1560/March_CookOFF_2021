#include <iostream>
using namespace std;
int main() {
	int t;
	cin >>t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin >>w1>>w2>>x1>>x2>>m;
	    w2-=w1;
	    x1*=m;
        x2*=m;
        if(x1<=w2 && w2<=x2)
          cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
	}
	return 0;
}
