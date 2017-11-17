#pragma once
#include "Vector2D.h"

class Node
{

public:
	Vector2D position;
	bool visited; 
	Node();
	Node(float x, float y);
	Node(Vector2D Vec);
	~Node();
};

