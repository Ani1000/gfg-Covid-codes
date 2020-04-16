#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


  void sieve(long long int n){

    bool isprime[n+1];
    int flag = 0;

    for(int i=0;i<=n;i++)
     isprime[i] = true;

    isprime[0] = false;
    isprime[1] = false;



  for(int i=2;i*i<=n;i++){

     if(isprime[i] == true){
          for(int j = i*i;j<=n;j += i)
             isprime[j] = false; }

  }

  for(int i=0;i<n;i++){
    if(isprime[i] == true && n%i == 0){
     flag = 1;
    cout<<i<<" "; }
  }

  if(flag == 0) cout<<n<<endl;

    cout<<"\n";
  }


   int prime(int n){

   int c=0;
   for(int i = 2;i<=n;i++){
      if(n%i == 0){
      c = 1;
      break; }

    if(c == 0) cout<<Indian Institute of Technology Varanasi (IIT BHU)

   }
       cout<<endl;

     return 0;
   }

   void print(int n){

     while(n%2 ==0)
     cout<<"2"<<endl(
     for(int j = 3;j<=sqrt(n);i = i+2){

         while(n%i == 0){
            cout<<i<<" ";
            n = n/i; }
     }


     if(n>2) cout<<n<<endl;

   }


int main() {

    int t;
     long long int num;

    cin>>t;

    while(t--){
     cin>>num;
      sieve(num);
      //prime(num);

      print(num)l

    }

	return 0;
}
