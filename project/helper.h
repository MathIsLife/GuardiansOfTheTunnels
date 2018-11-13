using namespace std;

const long double EPS = 1e-9;

struct edge {
  int a, b;

  edge () {}
  edge (int a, int b) : a(a), b(b) {}
};

struct color {
  int r, g, b;

  color () {}
  color (int r, int g, int b) : r(r), g(g), b(b) {}

  bool operator == (const color &rhs) const {
    return r == rhs.r && g == rhs.g && b == rhs.b;
  }
};

struct pic {
	int x, y;
	int pxl[512][512];
} picStorage;

struct point {
  double x, y;

  point () {}
  point (double x, double y) : x(x), y(y) {}
  point (const point &p) : x(p.x), y(p.y) {}

  point operator + (const point &p) const {
    return point(x + p.x, y + p.y);
  }

  point operator - (const point &p) const {
    return point(x - p.x, y - p.y);
  }

  point operator * (double c) const {
    return point(x * c, y * c);
  }

  point operator / (double c) const {
    return point(x / c, y / c);
  }

  bool operator < (const point &p) const {
    return x == p.x ? y < p.y : x < p.x;
  }
};

inline bool insideNewGame (int x, int y) {
//  return x >= 163 && x <= 163 + 194 && y >= 280 && y <= 280 + 58;
  return x >= 141 && x <= 358 && y >= 272 && y <= 300;
}

inline bool insideHighScores (int x, int y) {
//  return x >= 163 && x <= 163 + 194 && y >= 209 && y <= 209 + 58;
  return x >= 141 && x <= 358 && y >= 231 && y <= 263;
}

inline bool insideHowToPlay (int x, int y) {
//  return x >= 163 && x <= 163 + 194 && y >= 137 && y <= 137 + 58;
  return x >= 141 && x <= 358 && y >= 192 && y <= 222;
}

inline bool insideExit (int x, int y) {
  return x >= 141 && x <= 358 && y >= 151 && y <= 181;
}

inline bool insideBackFromHighScores (int x, int y) {
  return x >= 170 && x <= 330 && y >= 20 && y <= 70;
}

inline bool insideSubmitSolution (int x, int y) {
//  return x >= 147 && y >= 87 && x <= 147 + 226 && y <= 87 + 70;
  return x >= 70 && y >= 20 && x <= 230 && y <= 70;
}

inline bool insideBackFromGame (int x, int y) {
//  return x >= 146 && y >= 16 && x <= 146 + 228 && y <= 16 + 58;
  return x >= 280 && y >= 20 && x <= 440 && y <= 70;
}

inline bool insideBackFromScore (int x, int y) {
  return 1;
}

void load (char *filename, pic *aa){
	FILE *fp = fopen(filename, "r");
	int xx, yy, temp;
	fscanf(fp, "%d %d", &xx, &yy);
	aa -> x = xx, aa -> y = yy;
	for (int i = 0; i < xx; ++i) {
		for (int j = 0; j < yy; ++j) {
			if (!feof(fp)){
				fscanf(fp, "%d", &temp);
				aa -> pxl[i][j] = temp;
			}
		}
	}
	fclose(fp);
}

void iShowBMP2 (int x, int y, pic *a, int ignr0 = -1, int ignr1 = -1, int ignr2 = -1) {
	int xx, yy;
	xx = a -> x, yy = a -> y;
	int arr[4], temp;
	for (int i = 0; i < xx; ++i) {
		for (int j = 0; j < yy; ++j) {
			temp = a -> pxl[i][j];
			arr[0] = temp / 1000000;
			temp %= 1000000;
			arr[1] = temp / 1000;
			temp %= 1000;
			arr[2] = temp;
			if (arr[0] == ignr0 && arr[1] == ignr1 && arr[2] == ignr2) continue;
			iSetColor(arr[0], arr[1], arr[2]);
			iPoint(i + x, j + y);
		}
	}
}
