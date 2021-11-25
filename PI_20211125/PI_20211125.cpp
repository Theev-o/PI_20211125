#include <iostream>

#include <math.h>

struct point {
    double x, y;
};

inline double dis(point a, point b) {
    return sqrt(pow(b.y - a.y, 2) + pow(b.x - a.x, 2));
}

inline double getArea(point a, point b, point c) {
    return abs(((b.x - a.x) * (a.y - c.y)) - ((a.x - c.x) * (b.y - a.y))) / 2;
}

double getArea(point a, point b, point c);

using namespace std;

int main() {
    point a = {
      2.65,
      -1.11
    };

    point b = {
      9.98,
      3.2
    };

    point c = {
      -10.203,
      -4.621
    };

    cout << "The area of the triangle provided is " << getArea(a, b, c) << ".\n";

    return 0;
}

