// In this code we will reverse the subarray
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n = 6;
  int a[n] = {1,2,3,4,5,6};
  int l = 1,r=4;
  // converting them to 0-based indexing
  l--;r--;
  for(int p1=l,p2=r;p1<p2;p1++,p2--){
    swap(a[p1],a[p2]);
  }
  for(int i =0;i<n;i++){
    cout<<a[i] <<" ";
  }
  return 0;
}
