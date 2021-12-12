#include <iostream> 	// cout
#include <map>      	// map
#include <vector>   	// vector
#include <list>     	// list
#include "topsort.h" 	// header



int main(){

	Graph test_graph;
    test_graph.addEdge(10, 6);
    test_graph.addEdge(7, 6);
	test_graph.addEdge(6, 5);
	test_graph.addEdge(5, 4);
	test_graph.addEdge(4, 3);
	test_graph.addEdge(3, 2);
	test_graph.addEdge(2, 1);
	test_graph.addEdge(1, 0);
    test_graph.addEdge(0, 2);

	test_graph.getTopologicalOrdering();
    test_graph.printTopologicalOrderList();


	return 0;
}