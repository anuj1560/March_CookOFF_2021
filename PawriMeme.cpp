#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >>t;
	while(t--){
	    string s;
	    cin >>s;
	    int index=0;
	    while (true) {
            index = s.find("party", index);
          if (index == string::npos)
           break;
          s.replace(index, 5, "pawri");

         index += 5;
          }
          cout<<s<<endl;
	    
	}
	return 0;
}
