#include <iostream> 	// cout
#include <map>      	// map
#include <vector>   	// vector
#include <list>     	// list
#include "topsort.h" 	// header

int main(){
	
	Graph G;			// define a graph G
    G.addEdge(5, 11);	// edge from vertex  5 -> 11
    G.addEdge(7, 11);	// edge from vertex  7 -> 11
    G.addEdge(7, 8);	// edge from vertex  7 -> 8
    G.addEdge(3, 8);	// edge from vertex  3 -> 8
    G.addEdge(3, 9);	// edge from vertex  3 -> 9
    G.addEdge(11, 2);	// edge from vertex 11 -> 2
    G.addEdge(11, 9);	// edge from vertex 11 -> 9
    G.addEdge(11, 10);	// edge from vertex 11 -> 10
    G.addEdge(8, 9);	// edge from vertex  8 -> 9

	G.getTopologicalOrdering();			// generate topological ordering
    G.printTopologicalOrderList();		// print topological ordering

	return 0;	// exit program
}