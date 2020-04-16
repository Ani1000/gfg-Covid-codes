#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

int PalinArray(int a[], int n)
{  //add code here.
for(int i=0;i<n;i++)
{ int k=a[i],rev=0;
    while(k!=0)
    {int value = k%10;
    rev=rev*10+value;
    k/=10;
    }
    if(rev!=a[i])
return 0;

}
return 1;
}


 int main(){


  int sum,carry,n;
  cin>>n;

   carry=n/10;
    sum=n%10;

 cout<<carry<<" "<<sum<<endl;

  return 0;
 }
