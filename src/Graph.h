#pragma once
#include "Vector2D.h"
#include <vector>
#include <iostream>
using namespace std;

class Graph
{
	friend class Edge;

public:
	Graph();
	~Graph();
	std::vector<Edge> *Edges;
	
	Vector2D getConnections(std::vector<std::vector<int>> terrain);
	
};

