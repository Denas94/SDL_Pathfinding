#include "Graph.h"



Graph::Graph()
{

}


Graph::~Graph()
{
}

Vector2D Graph::getConnections(std::vector<std::vector<int>> terrain)
{
	int cont = 0;
	for (int i = 0; i < terrain.size(); i++) {
		cont++;
		cout << cont << endl;
		
	}
	cout << cont << endl;
	return Vector2D();
}
