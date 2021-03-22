#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll t,n,m,k;
    cin >>t;
    while(t--){
        cin >>n>>m>>k;
        ll result=0;
        for(ll i=1;i<=n;i++){
            if(min(m,i) % 2 ==1)
              result^=(i+k+1);
        }
        for(ll j=2;j<=m;j++){
            if(min(n,m-j+1)%2==1)
            result^=(j+k+n);
        }
        cout<<result<<"\n";
    }
	return 0;
}
