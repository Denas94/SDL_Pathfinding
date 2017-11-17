#include "Node.h"



Node::Node()
{
	position.x = 0;
	position.y = 0;
	visited = false;
}

Node::Node(float x, float y)
{
	position.x = x;
	position.y = y;
}

Node::Node(Vector2D Vec)
{
	position = Vec;
}

Node::~Node()
{

}
