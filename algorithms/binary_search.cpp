#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int item){
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = (low+ high)/2;
    int guess = a[mid];
    if(guess == item) return mid;
    if(guess > item) high = mid -1;
    else low = mid + 1;
  }
  return -1;
}
int main(){
  int a[6] = {1,2,3,4,5,6};
  int item = 4;
  if(binarySearch(a,6,item) == -1) cout<<"Element not found.\n";
  else cout<<"Element found at index: "<<binarySearch(a,6,item)<<"\n";
  
  return 0;
}
