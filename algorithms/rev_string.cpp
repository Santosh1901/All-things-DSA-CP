#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
  // using swap method
  string str = "Github";
  int n = str.length();
  for(int i =0;i<n/2;i++){
  	swap(str[i],str[n-i-1]);
  }
  cout<<str;
  // using c++-stl library
 // reverse(str.begin(),str.end());
  return 0;
}
