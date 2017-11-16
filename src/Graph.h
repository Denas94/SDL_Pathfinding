#pragma once
#include "Vector2D.h"
#include "Edge.h"
#include "Node.h"
#include <vector>
#include <iostream>

using namespace std;



class Graph
{
	
	
	

public:
	Graph();
	~Graph();
	
	std::vector<Edge> Edges;
	
	vector<Edge> getConnections(Node fromNode);
	
};

