#pragma once

#include "Vector2D.h"
#include "Node.h"
class Edge
{

	

	float cost;
	Node fromNode;
	Node toNode;

public:

	Edge(float cost, Node fromNode, Node toNode);
	~Edge();
	
	float getCost();
	Node getFromNode();
	Node getToNode();
};

