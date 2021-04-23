// In this file we will merge two sorted arrays
#include <bits/stdc++.h>
using namespace std;
void mergeSorted(int a[],int b[],int c[],int n,int m){
    int i=0,j=0,t = 0;
   while(i<n&&j<m){
        if(a[i] < b[j]){
            c[t++] = a[i++];
        }
        else {
            c[t++] = b[j++];
        }
    }
    while(i<n){
        c[t++] = a[i++];
    }
    while(j<m){
        c[t++] = b[j++];
    }
}
int main(){
  int n=4,m=4;
  int a[n] = {2,3,4,6};
  int b[m] = {1,5,7,8};
  int c[n+m];
  mergeSorted(a,b,c,n,m);
  for(int i = 0;i<n+m;i++){
      cout<<c[i]<<" ";
  }
  return 0;
}
  
  
