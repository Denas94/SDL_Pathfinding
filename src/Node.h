#pragma once
#include "Vector2D.h"

class Node
{

public:
	Vector2D position;
	bool visited; 
	int cost;
	Node();
	Node(float x, float y);
	Node(Vector2D Vec);
	~Node();

	Node * veiDreta;
	Node * veiEsquerra;
	Node * veiAdalt;
	Node * veiAbaix;

	Node * fromNode;
};

