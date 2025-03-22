#include "Point.h"

int main() {
    Point p1(3, 4), p2(1, 2), p3;

    cout << "Enter a point: ";
    cin >> p3;

    cout << "\nInitial Points:" << endl;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl;

    cout << "\nOperations:" << endl;
    cout << "Sum of points (p1 + p2): " << p1 + p2 << endl;
    cout << "Sum of point and number (p1 + 5): " << p1 + 5 << endl;
    cout << "Difference of points (p1 - p2): " << p1 - p2 << endl;
    cout << "Difference of point and number (p1 - 3): " << p1 - 3 << endl;

    cout << "\nComparison Results:" << endl;
    cout << "Is p1 equal to p2? " << (p1 == p2 ? "Yes" : "No") << endl;
    cout << "Is p1 not equal to p3? " << (p1 != p3 ? "Yes" : "No") << endl;

    cout << "\nString Conversion:" << endl;
    cout << "String representation of p1: " << string(p1) << endl;

    return 0;
}