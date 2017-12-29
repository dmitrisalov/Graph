#include "Graph.h"

Graph::Graph(unsigned int numVertices) {
	for (unsigned int i = 0; i < numVertices; i++) {
		addVertex();
	}
}

void Graph::addVertex() {
	//Vector that represents adjacency between vertices.
	std::vector<Edge *> adjList(size(), INVALID_EDGE);
	adjacency.push_back(adjList);
	
	//Increases element of each adjacency list to represent the new vertex.
	for (unsigned int i = 0; i < size(); i++) {
		adjacency[i].push_back(INVALID_EDGE);
	}
}

void Graph::addEdge(Vertex start, Vertex end, int weight, bool dir) {
	//Checks if there is not an attempt to add an edge between the same vertex.
	if (start != end) {
		Edge *newEdge = new Edge(start, end, weight);
		adjacency[start][end] = newEdge;
		
		//Checks if the edge is not directed.
		if (!dir) {
			addEdge(end, start, weight, true);
		}
	}
}

std::vector<Vertex> Graph::getAdjacent(Vertex vertex) const {
	std::vector<Vertex> adjacent;
	
	//Looks through the adjacency list for 'vertex'.
	for (unsigned int i = 0; i < adjacency[vertex].size(); i++) {
		//Checks if there is an edge connected to 'vertex'.
		if (adjacency[vertex][i] != INVALID_EDGE) {
			//Pushes the connected vertex to 'adjacent'.
			adjacent.push_back(i);
		}
	}
	
	return adjacent;
}

Edge & Graph::getEdge(Vertex start, Vertex end) {
	return *(adjacency[start][end]);
}

unsigned int Graph::size() const {
	return adjacency.size();
}