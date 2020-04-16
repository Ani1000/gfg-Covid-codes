#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;
#define mod 1000000007

bool check_num(long long int n){
     int f = 0 ;
     while(n){
         f += n%2 ;
         n /= 2 ;

         cout<<f<<" "<<n<<endl;
     }
     if(f == 1){
         return true ;
     }
     else{
         return false ;
     }
}


int main()
 {
	int t ;
	cin >> t ;
	while(t--){
	    long long int n ;
	    cin >> n ;
	    if(check_num(n)){
	        cout << "YES\n" ;
	    }
	    else{
	        cout << "NO\n" ;
	    }
	}

	return 0;
}
