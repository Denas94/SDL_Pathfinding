#pragma once
#include "Vector2D.h"
#include "Edge.h"
#include "Node.h"
#include <vector>
#include <iostream>

using namespace std;



class Graph
{
	
	vector<Edge> Edges;
	

public:
	Graph();
	~Graph();
	
	vector<Edge> getConnections(Node fromNode);

	void AddEdge(Edge e);
	
};

