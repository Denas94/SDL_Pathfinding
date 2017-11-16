#pragma once

#include "Vector2D.h"
class Edge
{

	

	float cost;
	Vector2D fromNode;
	Vector2D toNode;

public:

	Edge(float cost, Vector2D fromNode, Vector2D toNode);
	~Edge();
	
	float getCost();
	Vector2D getFromNode(Vector2D fromNode);
	Vector2D getToNode(Vector2D toNode);
};

