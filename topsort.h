using namespace std;    // namespace to clean code up


class Graph {
    private:
        map<int, vector<int>> adjacencyList;    // map node to adjacent nodes
        map<int, bool> visitedList;             // list to store visited nodes
        list<int> topologicalOrderList;         // list to store the Topological Ordering
    public:
        Graph() {   // constructor

        }

        void addEdge(int start_node, int end_node) {            
            adjacencyList[start_node].push_back(end_node);      // add end_node to start_node's adjacency list
        }

        void depthFirstSearch(int node) {
            visitedList[node] = true;                           // mark current node as visited

            for(int adjacent_node : adjacencyList[node]) {      // go through adjacency list of the current node
                if(visitedList[adjacent_node] == false) {       // if an adjacent node has not been visited yet,
                    depthFirstSearch(adjacent_node);            // run DFS
                }
            }

            topologicalOrderList.push_front(node);              // add node to front of Topological Order list
        }

        void getTopologicalOrdering() {
            for(auto adjacent_node : adjacencyList) {           // go through adjacency list
                int node = adjacent_node.first;                 // get node's int value
                if(visitedList[node] == false) {                // if a node has not been visited yet,
                    depthFirstSearch(node);                     // run DFS
                }
            }
        }

        void printTopologicalOrderList() {
            cout << "Topological Ordering:" << endl;
            for(auto iterator = topologicalOrderList.cbegin(); iterator != topologicalOrderList.cend(); iterator++) {
                if (iterator != topologicalOrderList.cbegin()) {
                    cout << " -> ";
                }
                cout << *iterator ;
            }
            cout << endl;
        }

};