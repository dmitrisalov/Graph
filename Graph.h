#ifndef GRAPH_H
#define GRAPH_H

#include "Edge.h"
#include <vector>
#include <string>

/**
 * Weighted graph representation using an adjacency matrix.
 * Created by Dmitri Salov, 2017.
 */
class Graph {
	public:
		/**
		 * Parameter constructor.
		 *
		 * @param numVertices The number of the vertices to be in the graph.
		 */
		Graph(unsigned int numVertices);
		
		/**
		 * Adds a vertex to the graph.
		 */
		void addVertex();
		
		/**
		 * Adds an edge to the graph.
		 *
		 * @param start The start vertex of the edge.
		 * @param end The end vertex of the edge.
		 * @param weight The weight of the edge.
		 * @param dir Whether or not the edge is directed from start to end.
		 */
		void addEdge(Vertex start, Vertex end, int weight, bool dir);
		
		/**
		 * Gets all vertices that are adjacent to a vertex.
		 *
		 * @param vertex The vertex to get adjacent vertices for.
		 *
		 * @return A vector of all adjacent vertices.
		 */
		std::vector<Vertex> getAdjacent(Vertex vertex) const;
		
		/**
		 * Gets a reference to an edge between two vertices.
		 *
		 * @param start The start vertex of the edge.
		 * @param end The end vertex of the edge.
		 *
		 * @return A reference to the edge.
		 */
		Edge & getEdge(Vertex start, Vertex end);
		
		/**
		 * Sets the label for a vertex.
		 *
		 * @param vertex The vertex to be labeled.
		 * @param label The label for the vertex.
		 */
		void setVertexLabel(Vertex vertex, std::string label);
		
		/**
		 * Gets the label of a vertex.
		 *
		 * @param vertex The vertex to get the label from.
		 */
		std::string getVertexLabel(Vertex vertex) const;
		
		/**
		 * Returns the size of the graph.
		 *
		 * @return The number of vertices.
		 */
		unsigned int size() const;
		
	private:
		std::vector<std::vector<Edge *>> adjacency;	//Adjacency matrix.
		std::vector<std::string> vertexLabels;	//Holds labels for vertices.
		
		Edge *INVALID_EDGE = new Edge(-1, -1, -1);
};

#endif