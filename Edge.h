#ifndef EDGE_H
#define EDGE_H

//Vertices may be represented by non-negative integers.
typedef int Vertex;

/**
 * Representation of a weighted edge between two vertices.
 */
class Edge {
	public:
		Vertex start;	//The beginning vertex of the edge.
		Vertex end;		//The ending vertex of the edge.
		int weight;
		
		/**
		 * Default constructor.
		 */
		Edge();
		
		/**
		 * Parameter constructor.
		 *
		 * @param start The beginning vertex of the edge.
		 * @param end The ending vertex of the edge.
		 * @param weight The weight of the edge.
		 */
		Edge(Vertex start, Vertex end, int weight);
}

#endif