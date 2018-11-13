#include "preprocessors.h"

const int NODE_RADIUS = 18;
const color INITIAL_NODE_COLOR = color(255, 255, 255);
const color MARKED_NODE_COLOR = color(255, 255, 0);
const color INITIAL_EDGE_COLOR = color(255, 0, 0);
const color MARKED_EDGE_COLOR = color(0, 0, 255);

int gameState;
int minCover;
int currentLevel, maxLevel = 6;
int storyPage;
int howToPlayPage;
long long score, prevScore;
char playerName[MAX_PLAYER_NAME_SIZE];
int playerNameLength;
int timeLeft;

vector <edge> edges;
vector <point> nodes;
vector <vector <int>> graph;

vector <color> currentNodeColors;
vector <color> currentEdgeColors;

