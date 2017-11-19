#include "PathFinding.h"

using namespace std;

PathFinding::PathFinding()
{
}

PathFinding::~PathFinding()
{
}

Vector2D PathFinding::BFS(Agent * agent, float dtime, Graph graph, Vector2D coinPosition, std::vector< std::vector<int> > terrain)
{

	Node initial = agent->position;
	list<Node> frontera;
	frontera.front = initial;
	initial.visited = true;
	while (!frontera.empty) {

		frontera.front = frontera.pop_front();
		graph.getConnections(initial);


		Node neighbour;
		//Condicio de pillar els veins no visitats encara
		
		
		for (int i = 0; i < graph.connections.size(); i++){
			
			
			neighbour = graph.connections[i].getToNode;
			neighbour.visited = true;
			frontera.push_front(graph.connections[i].getToNode);
			
			
		}
		

	}


	return 0;
}

