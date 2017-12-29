#include "Graph.h"
#include <iostream>

using namespace std;

int main() {
	//Edge class testing.
	Edge *edge1 = new Edge(-1, -1, -1);
	Edge *edge2 = new Edge(2, 4, 50);
	
	vector<Edge *> edges;
	edges.push_back(edge1);
	edges.push_back(edge2);
	
	for (Edge *edge : edges) {
		cout << "Start: " << edge->start << " End: " << edge->end;
		cout << " Weight: " << edge->weight << endl;
	}
	
	cout << endl;
	
	//Graph class testing.
	Graph *g1 = new Graph(1);
	Graph *g2 = new Graph(10);
	
	vector<Graph *> graphs;
	graphs.push_back(g1);
	graphs.push_back(g2);
	
	for (Graph *graph : graphs) {
		cout << "Graph size: " << graph->size() << " vertices" << endl;
	}
	
	cout << endl;
	
	g2->setVertexLabel(6, "test label");
	cout << "Label (6): " << g2->getVertexLabel(6) << endl;
	
	cout << endl;
	
	g2->addEdge(5, 3, 20, true);
	g2->addEdge(1, 5, 15, false);
	
	cout << "Edge 1 (5 --> 3) weight: " << g2->getEdge(5, 3).weight << 
	" (Should be 20.)" << endl;
	cout << "Edge 1 (3 --> 5) weight: " << g2->getEdge(3, 5).weight << 
	" (Should be -1.)" << endl;
	cout << "Edge 2 (1 --> 5) weight: " << g2->getEdge(1, 5).weight << 
	" (Should be 15.)" << endl;
	cout << "Edge 2 (5 --> 1) weight: " << g2->getEdge(5, 1).weight << 
	" (Should be 15.)" << endl;
	
	cout << endl << "Vertices adjacent to 5: [";
	
	for (Vertex vertex : g2->getAdjacent(5)) {
		cout << " " << vertex;
	}
	
	cout << " ] (Should be [ 1 3 ].)" << endl;
	
	return 0;
}