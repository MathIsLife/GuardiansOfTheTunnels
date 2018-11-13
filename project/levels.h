#include "variables.h"

void initLevel (int level) {
  currentLevel = level;

  if (level == 1) {
    timeLeft = 10;
    int translation = 210;

    nodes.clear();
    nodes.emplace_back(translation, translation);
    nodes.emplace_back(translation, translation + 200);
    nodes.emplace_back(translation + 100, translation + 200);
    nodes.emplace_back(translation + 100, translation);
    nodes.emplace_back(translation - 100, translation + 50);
    nodes.emplace_back(translation + 200, translation + 100);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(1, 2);
    edges.emplace_back(2, 3);
    edges.emplace_back(3, 0);
    edges.emplace_back(4, 0);
    edges.emplace_back(4, 1);
    edges.emplace_back(5, 2);

    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 3;
  }

  if (level == 2) {
    timeLeft = 15;
    int x = 220, y = 210;

    nodes.clear();
    nodes.emplace_back(x + 50, x + 100);
    nodes.emplace_back(x - 140, x + 40);
    nodes.emplace_back(x, x - 70);
    nodes.emplace_back(x + 170, x + 90);
    nodes.emplace_back(x + 180, x - 80);
    nodes.emplace_back(x + 180, x + 190);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(0, 2);
    edges.emplace_back(0, 3);
    edges.emplace_back(0, 4);
    edges.emplace_back(0, 5);
    edges.emplace_back(1, 2);


    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 2;
  }

  if (level == 3) {
    timeLeft = 20;
    int translation = 260;

    nodes.clear();
    nodes.emplace_back(translation, translation);
    nodes.emplace_back(translation + 100, translation);
    nodes.emplace_back(translation + 100, translation + 100);
    nodes.emplace_back(translation, translation + 100);
    nodes.emplace_back(translation, translation + 150);
    nodes.emplace_back(translation - 120, translation + 100);
    nodes.emplace_back(translation - 120, translation);
    nodes.emplace_back(translation, translation - 70);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(0, 3);
    edges.emplace_back(0, 5);
    edges.emplace_back(0, 6);
    edges.emplace_back(0, 7);
    edges.emplace_back(1, 3);
    edges.emplace_back(2, 3);
    edges.emplace_back(3, 4);
    edges.emplace_back(3, 5);
    edges.emplace_back(4, 5);
    edges.emplace_back(5, 6);

    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 3;
  }

  if (level == 4) {
    timeLeft = 25;
    int xTranslation = 180, yTranslation = 290;

    nodes.clear();
    nodes.emplace_back(xTranslation, yTranslation);
    nodes.emplace_back(xTranslation + 70, yTranslation);
    nodes.emplace_back(xTranslation + 120, yTranslation);
    nodes.emplace_back(xTranslation + 170, yTranslation);
    nodes.emplace_back(xTranslation + 260, yTranslation + 120);
    nodes.emplace_back(xTranslation + 170, yTranslation + 70);
    nodes.emplace_back(xTranslation + 120, yTranslation + 120);
    nodes.emplace_back(xTranslation + 95, yTranslation + 70);
    nodes.emplace_back(xTranslation + 45, yTranslation + 70);
    nodes.emplace_back(xTranslation - 80, yTranslation + 120);
    nodes.emplace_back(xTranslation - 70, yTranslation - 70);
    nodes.emplace_back(xTranslation + 70, yTranslation - 70);
    nodes.emplace_back(xTranslation + 120, yTranslation - 70);
    nodes.emplace_back(xTranslation + 170, yTranslation - 70);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(0, 8);
    edges.emplace_back(0, 9);
    edges.emplace_back(0, 10);
    edges.emplace_back(1, 2);
    edges.emplace_back(1, 7);
    edges.emplace_back(2, 3);
    edges.emplace_back(2, 5);
    edges.emplace_back(2, 7);
    edges.emplace_back(2, 11);
    edges.emplace_back(2, 12);
    edges.emplace_back(2, 13);
    edges.emplace_back(3,4);
    edges.emplace_back(4, 5);
    edges.emplace_back(4, 6);
    edges.emplace_back(4, 13);
    edges.emplace_back(4, 7);

    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 4;
  }

  if (level == 5) {
    timeLeft = 35;

    int x = 16, y = 305;
    nodes.clear();
    nodes.emplace_back(x+10,y);
    nodes.emplace_back(x+80, y);
    nodes.emplace_back(x+160, y);
    nodes.emplace_back(x+240, y);
    nodes.emplace_back(x+320, y);
    nodes.emplace_back(x+400, y);
    nodes.emplace_back(x+470, y);
    nodes.emplace_back(x+80, y-85);
    nodes.emplace_back(x+160, y-85);
    nodes.emplace_back(x+240, y-85);
    nodes.emplace_back(x+320, y-85);
    nodes.emplace_back(x+400, y-85);
    nodes.emplace_back(x+160, y-170);
    nodes.emplace_back(x+320, y-170);
    nodes.emplace_back(x+80, y+85);
    nodes.emplace_back(x+160, y+85);
    nodes.emplace_back(x+240, y+85);
    nodes.emplace_back(x+320, y+85);
    nodes.emplace_back(x+400, y+85);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(0, 7);
    edges.emplace_back(0, 14);
    edges.emplace_back(1, 2);
    edges.emplace_back(2, 3);
    edges.emplace_back(2, 7);
    edges.emplace_back(2, 8);
    edges.emplace_back(2, 9);
    edges.emplace_back(2, 14);
    edges.emplace_back(2, 15);
    edges.emplace_back(2, 16);
    edges.emplace_back(3, 4);
    edges.emplace_back(4, 5);
    edges.emplace_back(4, 9);
    edges.emplace_back(4, 10);
    edges.emplace_back(4, 11);
    edges.emplace_back(4, 16);
    edges.emplace_back(4, 17);
    edges.emplace_back(4, 18);
    edges.emplace_back(5, 6);
    edges.emplace_back(6, 11);
    edges.emplace_back(6, 18);
    edges.emplace_back(7, 8);
    edges.emplace_back(7, 12);
    edges.emplace_back(8, 9);
    edges.emplace_back(8, 12);
    edges.emplace_back(9, 10);
    edges.emplace_back(9, 12);
    edges.emplace_back(10, 11);
    edges.emplace_back(10, 13);
    edges.emplace_back(12, 13);

    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 7;
  }

  if (level == 6) {
    timeLeft = 40;
    int x = 195, y = 110;

    nodes.clear();
    nodes.emplace_back(x,y);
    nodes.emplace_back(x+170, y);
    nodes.emplace_back(x+200, y+70);
    nodes.emplace_back(x+220, y+220);
    nodes.emplace_back(x+100, y+300);
    nodes.emplace_back(x, y+280);
    nodes.emplace_back(x-80, y+300);
    nodes.emplace_back(x-130, y+180);
    nodes.emplace_back(x-110, y+100);
    nodes.emplace_back(x-100, y+10);
    nodes.emplace_back(x-10, y+50);
    nodes.emplace_back(x+100, y+50);
    nodes.emplace_back(x+170, y+120);
    nodes.emplace_back(x+70, y+220);
    nodes.emplace_back(x-40, y+210);
    nodes.emplace_back(x-60, y+130);
    nodes.emplace_back(x - 20, y+85);
    nodes.emplace_back(x+60, y+70);
    nodes.emplace_back(x+80, y+150);
    nodes.emplace_back(x+10, y+180);
    nodes.emplace_back(x+10, y+130);
    nodes.emplace_back(x+70, y+110);

    edges.clear();
    edges.emplace_back(0, 1);
    edges.emplace_back(0, 8);
    edges.emplace_back(1, 2);
    edges.emplace_back(1, 10);
    edges.emplace_back(1, 11);
    edges.emplace_back(1, 12);
    edges.emplace_back(2, 3);
    edges.emplace_back(3, 4);
    edges.emplace_back(3, 12);
    edges.emplace_back(3, 13);
    edges.emplace_back(3, 17);
    edges.emplace_back(3, 18);
    edges.emplace_back(4, 14);
    edges.emplace_back(5, 6);
    edges.emplace_back(5, 14);
    edges.emplace_back(6, 7);
    edges.emplace_back(6, 14);
    edges.emplace_back(7, 8);
    edges.emplace_back(7, 14);
    edges.emplace_back(8, 9);
    edges.emplace_back(8, 10);
    edges.emplace_back(8, 15);
    edges.emplace_back(8, 16);
    edges.emplace_back(13, 14);
    edges.emplace_back(13, 20);
    edges.emplace_back(14, 15);
    edges.emplace_back(14, 19);
    edges.emplace_back(16, 20);
    edges.emplace_back(17, 20);
    edges.emplace_back(18, 20);
    edges.emplace_back(19, 20);
    edges.emplace_back(20, 21);

    graph.clear();
    graph.resize(nodes.size());
    for (int i = 0; i < edges.size(); ++i) {
      graph[edges[i].a].push_back(i);
      graph[edges[i].b].push_back(i);
    }

    currentNodeColors.clear();
    for (auto it : nodes) {
      currentNodeColors.push_back(INITIAL_NODE_COLOR);
    }

    currentEdgeColors.clear();
    for (auto it : edges) {
      currentEdgeColors.push_back(INITIAL_EDGE_COLOR);
    }

    minCover = 6;
  }
}

