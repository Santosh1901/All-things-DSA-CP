// This code uses the Sieve of Erastosthenes method to print all the primes till N.
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n = 30;
  int i,j;
  vector<bool> is_prime(n+1,true);
  for(i=2;i*i<=n;i++){
    if(is_prime[i]){
      for(j = i+i;j<=n;j += i){
        is_prime[j] = false;
      }
    }
    for(i=2;i<=n;i++){
      if(is_prime[i]){
        cout<<i<<" ";
      }
    }
    return 0;
}
}
