#include "PathFinding.h"

using namespace std;

PathFinding::PathFinding()
{
}

PathFinding::~PathFinding()
{
}

Vector2D PathFinding::BFS(Agent * agent, float dtime,Graph graph, Vector2D coinPosition, std::vector< std::vector<int> > terrain)
{
	graph.getConnections(terrain, agent);
	return 0;
}

