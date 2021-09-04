// reverse a stack using recursion
#include <iostream>
#include <stack>
using namespace std;
// helper function which is used to insert the element at the bottom
void insertAtBottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,x);
}
int main() {
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
