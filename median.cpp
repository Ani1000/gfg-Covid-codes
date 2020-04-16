#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define mod 100000007
long long int find(long long int n,long long int x)
{
    long long int result =1;
    cout<<"intially res "<<result<<" "<<"N "<<n<<" "<<"X "<<x<<endl;
    while(x)
    {
        if(x%2==1){
             result = (result%mod*n%mod)%mod; }
        x=x/2;
        n=(n%mod *n%mod)%mod;

      cout<<"res "<<result<<" "<<"N "<<n<<" "<<"X "<<x<<endl;
    }
    return result;
}

int main() {
	long long int t,i,j,k,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long int reverse = 0,p=n;
	    while(p){
	        reverse = reverse*10+p%10;
	        p=p/10; }

	    long long int ans = find(n,reverse);
	    cout<<ans<<endl;
	}
	return 0;
}
