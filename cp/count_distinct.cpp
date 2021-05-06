// This code contains how to count distinct elements in an array
// Below implementation uses hashing
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n =5;
    int a[n] = {2,4,4,3,2};
    int count =0;
    unordered_set<int> s;
    for(int i =0;i<n;i++){
        if(s.find(a[i]) == s.end()){
            s.insert(a[i]);
            count++;
        }
    }
    cout<<count;
    return 0;
}
