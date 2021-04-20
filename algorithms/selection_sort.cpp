#include <bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
void selection_sort(int a[],int n){
  for(int i = 0;i<n-1;i++){
    int min = i;
    for(int j = i+1;j<n;j++){
      if(a[j] < a[min]){
        min = j;
      }
    }
    if(min != i) swap(&a[min],&a[i]);
}
}
void printArray(int a[],int n){
  for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
int main(){
  int n = 6;
  int a[n] = {5,1,4,3,10,6};
  selection_sort(a,n);
  printArray(a,n);
  
  return 0;
}
