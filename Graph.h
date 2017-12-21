/*
	Weighted graph representation using an adjacency matrix.
	Created by Dmitri Salov, 2017.
*/
class Graph {
	public:
		struct Vertex {
			unsigned int value;
		}
		
		struct Edge {
			Vertex start;
			Vertex end;
			unsigned int weight;
		}
		
	private:
}