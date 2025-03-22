#include "Point.h"
#include <sstream>

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}
Point::Point(const Point& other) : x(other.x), y(other.y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator+(double value) const {
    return Point(x + value, y + value);
}

Point operator-(const Point& a, const Point& b) {
    return Point(a.x - b.x, a.y - b.y);
}

Point operator-(const Point& a, double value) {
    return Point(a.x - value, a.y - value);
}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

Point::operator string() const {
    ostringstream oss;
    oss << "(" << x << ", " << y << ")";
    return oss.str();
}

istream& operator>>(istream& in, Point& p) {
    cout << "Enter x: ";
    in >> p.x;
    cout << "Enter y: ";
    in >> p.y;
    return in;
}

ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}