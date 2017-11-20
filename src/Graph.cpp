#include "Graph.h"



Graph::Graph()
{
	
}


Graph::~Graph()
{
}

vector<Edge> Graph::getConnections(Node fromNode)
{

	
	int counterToNodes = 0;
	for (unsigned int i = 0; i < Edges.size(); i++)
	{
		if (Edges[i].fromNode.position == fromNode.position) {

			connections.push_back(Edges[i]);
			++counterToNodes;
			if (counterToNodes >= 4) {
				break;
			}

		}
	
	}
	return connections;
}

void Graph::AddEdge(Edge e)
{
	Edges.push_back(e);
}

