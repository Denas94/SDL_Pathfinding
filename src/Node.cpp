#include "Node.h"



Node::Node()
{
	position.x = 0;
	position.y = 0;
	cost = 0;
	visited = false;
	veiDreta = nullptr;
	veiEsquerra = nullptr;
	veiAdalt = nullptr;
	veiAbaix = nullptr;
	//fromNode = nullptr;
}

Node::Node(float x, float y)
{
	position.x = x;
	position.y = y;
	cost = 0;
	visited = false;
	veiDreta = nullptr;
	veiEsquerra = nullptr;
	veiAdalt = nullptr;
	veiAbaix = nullptr;
	//fromNode = nullptr;
}

Node::Node(Vector2D Vec)
{
	position = Vec;
	cost = 0;
	visited = false;
	veiDreta = nullptr;
	veiEsquerra = nullptr;
	veiAdalt = nullptr;
	veiAbaix = nullptr;
	//fromNode = nullptr;
}

Node::~Node()
{

}
