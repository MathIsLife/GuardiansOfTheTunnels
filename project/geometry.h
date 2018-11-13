inline double dot (point p, point q) {
  return p.x * q.x + p.y * q.y;
}

inline double distance (point a, point b) {
  return hypot(a.x - b.x, a.y - b.y);
}

vector <point> circleLineIntersection (point a, point b, point c, double r) {
  vector <point> ret;
  b = b - a;
  a = a - c;
  double A = dot(b, b);
  double B = dot(a, b);
  double C = dot(a, a) - r * r;
  double D = B * B - A * C;
  if (D < -EPS) return ret;
  ret.push_back(c + a + b * (-B + sqrt(D + EPS)) / A);
  if (D > EPS) ret.push_back(c + a + b * (-B - sqrt(D)) / A);
  return ret;
}

inline bool eq (double x, double y) {
  return fabs(x - y) < EPS;
}

/// triangle area
inline double area (point a, point b, point c) {
  return a.x * b.y + b.x * c.y + c.x * a.y - a.y * b.x - b.y * c.x - c.y * a.x;
}

/// a --> b --> c is clockwise or not?
inline int orientation (point a, point b, point c) {
  double picStorage = area(a, b, c);
  return picStorage > 0 ? +1 : -1;
}

/// returns a point at distance d from 'a' perpendicular to line ab
inline point adjust (point a, point b, double d, int ori) {
  int dx = a.x - b.x, dy = a.y - b.y;
  /// _a * x + _b * y + _c = 0
  int _a = dx, _b = dy, _c = dx * a.x + dy * a.y;
  point other = (dx == 0 ? point(0, a.y) : point(_c / dx, 0));
  double radius = sqrt(distance(a, b) * distance(a, b) + d * d);
  vector <point> res = circleLineIntersection(a, other, b, radius);
  if (res.size() == 1) return res[0];
  return orientation(a, b, res[0]) == ori ? res[0] : res[1];
}


