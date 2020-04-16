#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define mod 1000000007


int main()
 {
	int t ;
	cin >> t ;
	while(t--){

	    string s ;
	    cin >> s ;

	    int index = 0 , n = s.length() , i;
	    reverse(s.begin() , s.end()) ;

	    cout<<s<<endl;

	    for(i=0;i<n;i++){

	        if(s[i] == '.'){
	            reverse(s.begin()+index , s.begin()+i) ;
	            index = i+1 ;
	        }
	    }

	    reverse(s.begin()+index , s.end()) ;
	    cout << s << endl ;
	}

	return 0;
}
