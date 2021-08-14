// the following code will contain as many stl concepts as possible.
// i will adding more
#include <bits/stdc++.h>
using namespace std;

void explainPair(){

  pair<int,int> p = {2,3};

  cout<<p.first<<" "<<p.second;
 cout<<"\n"; 
  pair<int, pair<int,int>> t = {1,{2,3}};

  cout<<t.first<<" " << t.second.second;
  cout<<"\n";

  pair<int ,int> arr[] = {{1,2},{3,4},{5,6}};

  cout<<arr[1].second;

  cout<<"\n";
}

void explainVector(){

 
  vector<pair<int,int>> vec;
 //int i = v.at(5);
  vec.push_back({1,2});
  
  vector<int> v(5,20);

  vector<int>::iterator it = v.begin();

  it++;
  cout<<*it<<"\n";

  v.erase(v.begin()+2,v.begin()+4);
  for(auto i : v){
    cout<< i <<"\n";
  }
 vector<int> k(2,100);
 k.insert(k.begin(),300);

 for(auto i : k){
   cout<<i<<"\n";
 }
  k.insert(k.begin() + 1,2,10);

for(auto i : k){
  cout<<i<<"\n";
}
}

void explainList(){
  // prefer when we add to front
    list<int> ls;
    ls.push_back(2);
    ls.push_front(55);
  
}

void explainDeque(){
  deque<int> d;
  d.push_back(9);
  d.push_front(2);

d.pop_back();
d.back();
d.front();

}
void explainStack(){
    stack<int> s;
    s.push(2);
    s.push(4);
    cout<< s.top()<<"\n";
 
    s.pop();
    s.size();
    s.empty();

}

void explainQueue(){

  queue<int> q;
  q.push(2);
  q.push(3);

  q.back();
  q.front();
}

void explainPq(){
      // stores the elements in a sorted fashion
      // in descending order 
      // for eg:- 
      // {10,9,8,3}
  priority_queue<int> pq;

  pq.push(2);
  pq.push(3);
  pq.push(9);
  pq.push(1);
  pq.emplace(10);
// pq.pop();
  cout<<pq.top();

  // minimum heap 
  // to store in increasing order

  priority_queue<int, vector<int>, greater<int>> p;

  p.push(5);
  p.push(3);
  p.push(9);
  p.push(1); // 1,3,5,9
  p.top();

}
void explainSet(){
  
  // set stores elements in sorted order(ascending)
  // but it stores only unique elements

  set<int> s;
  s.insert(5);
  s.emplace(6);
  s.insert(1);
  s.insert(3);   // 1,3,5,6

  //auto it = s.find(3);
  
//  s.erase(4); // uses logarithmic time 

//  int cnt = s.count(2);

//  auto i = s.find(2);
 // s.erase(i); // takes constant time
  auto it = s.find(3);

cout<<(*it - *s.lower_bound(3));

   


}





int main() {
                // 0 1 2 3 4 5 6 7   
  explainSet();
 
}
