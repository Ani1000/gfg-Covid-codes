#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 int sums(int num){

 long long int sum = 0;

  while(num){

       int rem = num%10;
       sum += rem;
       num = num/10; }

    if(sum <10)
    cout<<sum<<endl;
    else
      sums(sum);

  }

int main() {

    int t;
     long int num;

    cin>>t;

    while(t--){
     cin>>num;
      sums(num);
    }

	return 0;
}
