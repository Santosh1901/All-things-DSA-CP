// rotate array 
#include <bits/stdc++.h>
using namespace std;
// rotate anti-clockwise
void rotateOnceAnti(int a[],int n){
  int temp = a[0];
  for(int i = 1;i<n;i++){
    a[i-1] = a[i];
  }
  a[n-1] = temp;
}
// rotate clockwise
void rotateOnceClock(int a[],int n){
  int temp = a[n-1];
  for(int i = n-1;i>=0;i--){
    a[i] = a[i-1];
  }
  a[0] = temp;
}
void rotate(int a[],int n,int k){
  for(int i = 0;i<k;i++){
    rotateOnceAnti(a,n);
  //rotateOnceClock(a,n);
  }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
  int n = 6;
  int a[n] = {1,2,3,4,5,6};
  int key = 1;
  rotate(a,n,key);
  printArray(a,n);
  return 0;
}
  
