// This will contain stack implementation using STL
#include <iostream>
#include <stack>
using namespace std;
int main(){
  stack<int> s;
  s.push(4);// pushes an element into the stack
  s.push(2);
  s.push(3);
  s.push(8);
  
  cout<<s.top()<<"\n"; // prints the top element at the stack
  
  while(!s.empty()){ // checks if the stack is empty or not
    cout<< s.top<<" ";
    s.pop(); // removes the element from the stack
  }
  
  return 0;
}
