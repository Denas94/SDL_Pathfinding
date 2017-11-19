#include "Graph.h"



Graph::Graph()
{
	
}


Graph::~Graph()
{
}

vector<Edge> Graph::getConnections(Node fromNode)
{

	
	int counterToNodes;
	for (unsigned int i = 0; i < Edges.size(); i++)
	{
		if (Edges[i].getFromNode == fromNode) {

			connections.push_back(Edges[i]);
			++counterToNodes;
			if (counterToNodes >= 4) {
				break;
			}



		}
	
	}
	
	
}

void Graph::AddEdge(Edge e)
{
	Edges.push_back(e);
}

