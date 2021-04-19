#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[6] = {5,1,4,6,3,2};
  int i;
  for(i = 1;i<6;i++){
    int temp = a[i];
    int j = i-1;
    while(j>=0 && temp<a[j]){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }
  for(i=0;i<6;i++) cout<<a[i] <<" ";
  return 0;

}
