#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


int maxSumSubarray(int a[], int n)
{

 sort(a,a+n);
 int sum = 0;
 for(int i=1;i<n;i++){
   sum += a[i];
 }


 return sum;
}
