#include "Graph.h"



Graph::Graph()
{
	
}


Graph::~Graph()
{
}

vector<Edge> Graph::getConnections(Node fromNode)
{

	std::vector<Edge> Arestes;
	for (unsigned int i = 0; i < Edges.size(); i++)
	{
		if (Edges[i].getFromNode == fromNode.position)
		{
			Arestes.push_back(Edges[i]);
			if (Arestes.size() >= 4)
			{
				//Ja te els 4 veins maxims que pot tindre.
				break;
			}
		}
	}
	return Arestes;
}

void Graph::AddEdge(Edge e)
{
	Edges.push_back(e);
}

