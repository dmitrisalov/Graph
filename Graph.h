#ifndef GRAPH_H
#define GRAPH_H

#include "Edge.h"
#include <vector>

/**
 * Weighted graph representation using an adjacency matrix.
 * Created by Dmitri Salov, 2017.
 */
class Graph {
	public:
		/**
		 * Default constructor. Creates an empty graph.
		 */
		Graph();
		
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
		 * Returns the size of the graph.
		 *
		 * @return The number of vertices.
		 */
		unsigned int size() const;
		
	private:
		std::vector<std::vector<Edge *>> adjacency;	//Adjacency matrix.
		
		Edge *INVALID_EDGE = new Edge(-1, -1, -1);
};

#endif