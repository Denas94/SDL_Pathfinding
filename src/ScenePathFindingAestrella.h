#pragma once
#include <vector>
#include <time.h>
#include "Scene.h"
#include "Agent.h"
#include "Path.h"
#include "Graph.h"
#include "Edge.h"
#include "Node.h"

class ScenePathFindingAestrella :
	public Scene
{
public:
	ScenePathFindingAestrella();
	~ScenePathFindingAestrella();
	void update(float dtime, SDL_Event *event);
	void draw();
	const char* getTitle();
private:
	std::vector<Agent*> agents;
	Vector2D coinPosition;
	Vector2D currentTarget;
	int currentTargetIndex;
	Path path;
	int num_cell_x;
	int num_cell_y;
	bool draw_grid;
	std::vector<SDL_Rect> maze_rects;
	void drawMaze();
	void drawCoin();
	SDL_Texture *background_texture;
	SDL_Texture *coin_texture;
	void initMaze();
	void initGraph();
	bool loadTextures(char* filename_bg, char* filename_coin);
	std::vector< std::vector<int> > terrain;
	Vector2D cell2pix(Vector2D cell);
	Vector2D pix2cell(Vector2D pix);
	bool isValidCell(Vector2D cell);
	Graph graph;
	void AEstrella(Node inici, Node final);
	int currX, currY;
	Node inici, objectiu;
	bool start = false;
	bool finished = false;
	std::vector< std::vector<Node> > from;
	int nodesMin = 100000;

	void SetCosts();

	int minimNodes = 100000;
	int contador, maximNodes, suma, times;
	float mitjaNodes;
	void caculNodes();


	
};
