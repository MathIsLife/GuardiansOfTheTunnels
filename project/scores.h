#include "variables.h"

void highScores() {
  iShowBMP(0, 0, "pictures/highScoresBackground.bmp");
  iShowBMP(170, 20, "pictures/backToMenu.bmp");

  freopen("scores/data.txt", "r", stdin);
  long long score;

  char temp[100];
  int x = 110, y = 395;
  for (int i = 1; i <= 10; ++i, y -= 32) {
    scanf("%s %lld", temp, &score);
    char str[100];
    sprintf(str, "#%02d.    %10lld      by   %s", i, score, temp);
    iSetColor(255, 255, 255);
    iText(x, y, str, GLUT_BITMAP_TIMES_ROMAN_24);
  }
}

void calculateScore() {
  int cover = 0;
  for (auto it : currentNodeColors) {
    if (it == MARKED_NODE_COLOR) {
      ++cover;
    }
  }
  score = 1000.0 * minCover / 1.0 / cover;
}

void updateScore (long long cur) {
  FILE *inp = fopen("scores/data.txt", "r");
  vector <pair <long long, string>> v(10);
  char temp[100];
  rep (i, 0, 9) {
    fscanf(inp, "%s %lld", temp, &v[i].first);
    v[i].second = temp;
  }
  v.emplace_back(cur, "");
  v.back().second = playerName;
  sort(v.begin(), v.end());
  fclose(inp);

  FILE *out = fopen("scores/data.txt", "w");
  repl (i, 10, 1) {
    fprintf(out, "%s %lld\n", v[i].second.c_str(), v[i].first);
  }
  fclose(out);
}

void drawScore() {
  char path[100];
  sprintf(path, "pictures/game%d.bmp", 1 + currentLevel % 3);
  iShowBMP(0, 0, path);

  iSetColor(255, 255, 255);
  char buff[100];
  sprintf(buff, "Your score on this level: %lld.", score);
  iText(110, 280, buff, GLUT_BITMAP_TIMES_ROMAN_24);
  memset(buff, 0, sizeof buff);
  sprintf(buff, "Your total score: %lld.", score + prevScore);
  iText(140, 240, buff, GLUT_BITMAP_TIMES_ROMAN_24);

  iShowBMP(70, 20, "pictures/continue.bmp");
  iShowBMP(280, 20, "pictures/backToMenu.bmp");
}

