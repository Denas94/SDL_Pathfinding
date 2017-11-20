#pragma once

#include "Vector2D.h"
#include "Node.h"
class Edge
{

	

public:

	Edge(float cost, Node fromNode, Node toNode);
	~Edge();


	float cost;
	Node fromNode;
	Node toNode;

	float getCost();
	Node getFromNode();
	Node getToNode();
};

