#pragma once
#include <vector>
#include "Agent.h"
#include "Vector2D.h"
#include "Graph.h"

class Agent;

class PathFinding
{
public:
	PathFinding();
	~PathFinding();

	Vector2D BFS(Agent *agent, float dtime, Graph graph, Vector2D coinPosition, std::vector< std::vector<int> > terrain);

};