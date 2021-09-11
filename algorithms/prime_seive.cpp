#include <bits/stdc++.h>
using namespace std;
int n = 16;
vector<bool> isprime(n+1,true);
void prime(){
    isprime[0] = false;
    isprime[1] = false;
    for(int i= 2;i<=n;i++){
        if(isprime[i] && (long long)i *i<=n){
            for(int j = i*i;j<=n;j+=i){
                isprime[j] = false;
            }
        }
    }
}
int main() {
    prime();
    for(int i = 0;i<n;i++){
        cout<<(isprime[i])<<"\n";
    }
    
}
