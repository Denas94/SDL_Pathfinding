#include "Edge.h"



Edge::Edge(int coste, Vector2D fromNodeVector, Vector2D toNodeVector)
{
	cost = coste;
	fromNode = fromNodeVector;
	toNode = toNodeVector;

}

Edge::~Edge()
{
}

int Edge::getCost()
{
	return 0;
}

Vector2D Edge::getFromNode(Vector2D fromNode)
{
	return fromNode;
}

Vector2D Edge::getToNode(Vector2D toNode)
{
	return toNode;
}
