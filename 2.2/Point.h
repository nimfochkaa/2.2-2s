#pragma once

#include <iostream>
#include <string>

using namespace std;

class Point {
private:
    double x, y;

public:
    Point();
    Point(double x, double y);
    Point(const Point& other);

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    Point operator+(const Point& other) const;   
    Point operator+(double value) const;         
    friend Point operator-(const Point& a, const Point& b); 
    friend Point operator-(const Point& a, double value);   

    Point& operator=(const Point& other);  

    bool operator==(const Point& other) const;  
    bool operator!=(const Point& other) const;

    operator string() const;

    friend istream& operator>>(istream& in, Point& p);
    friend ostream& operator<<(ostream& out, const Point& p);
};
