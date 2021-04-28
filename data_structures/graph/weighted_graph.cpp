#include <iostream>
#include <list>
#include <unordered_map>
#include <cstring>
#define pb push_back
#define mp make_pair
#define f first
#define s second
using namespace std;

class Graph{
	unordered_map<string,list<pair<string,int>>> l;
public:
	void addEdge(string x, string y,bool bi,int wt){
		l[x].pb(mp(y,wt));
		if(bi){
			l[y].pb(mp(x,wt));
		}
	}
	void printList(){
		for(auto i : l){
			string city = i.f;
			list<pair<string,int>> n = i.s;
			cout<<city<<" -> ";
			for(auto ns: n){
				cout<<"("<<ns.f<<" "<<ns.s<<"), ";
			}
			cout<<"\n";
		}
	}
};
int main(){
	Graph g;
	g.addEdge("A","B",true,40);
	g.addEdge("A","C",true,10);
	g.addEdge("A","D",false,50);
	g.addEdge("B","D",true,30);
	g.addEdge("D","C",true,20);
	g.printList();
}
