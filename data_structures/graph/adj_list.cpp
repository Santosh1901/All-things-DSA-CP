// this code contains adjacency list implementation of graph.
// it is an unweighted graph, and considered bidirectional 
#include <iostream>
#include <list>
using namespace std;
class Graph{
  int v;
  list<int> *l;
 public:
  Graph(int v){
    this->v = v;
    l = new list<int>[v];
  }
  void addEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
  }
  void printList(){
    for(int i =0;i<v;i++){
      cout<<"Vertex " <<i<<" -> ";
      for(auto n: l[i]){
        cout<<n<<" ";
      }
      cout<<"\n";
    }
  }
};
int main(){
  Graph g(5);
  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(2,3);
  g.addEdge(3,4);
  g.printList();
  return 0;
}

