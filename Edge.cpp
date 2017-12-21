#include "Edge.h"

Edge::Edge() : 
		start(-1), 
		end(-1), 
		weight(-1) {
	//Nothing.
}

Edge::Edge(Vertex start, Vertex end, int weight) : 
		start(start),
		end(end),
		weight(weight) {
	//Nothing.
}