#pragma once

#include "Vector2D.h"
class Edge
{
	int cost;
	Vector2D fromNode;
	Vector2D toNode;

public:

	Edge(int cost, Vector2D fromNode, Vector2D toNode);
	~Edge();

	int getCost();
	Vector2D getFromNode(Vector2D fromNode);
	Vector2D getToNode(Vector2D toNode);
};

