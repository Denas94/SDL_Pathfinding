#include "Edge.h"



Edge::Edge(float coste, Node fromNodeVector, Node toNodeVector)
{
	cost = coste;
	fromNode = fromNodeVector;
	toNode = toNodeVector;

}

Edge::~Edge()
{
}

float Edge::getCost()
{
	return cost;
}

Node Edge::getFromNode()
{
	return fromNode;
}

Node Edge::getToNode()
{
	return toNode;
}
