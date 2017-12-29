#include "Graph.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
	Edge edge1 = new Edge();
	Edge edge2 = new Edge(0, 1, 0);
	
	vector<Edge> edges;
	edges.push_back(edge1);
	edges.push_back(edge2);
	
	for (Edge edge : edges) {
		cout << "Start: " << edge.source << " End: " << edge.end;
		cout << " Weight: " << edge.weight << endl;
	}
	
	return 0;
}