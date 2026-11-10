
#include <iostream>
#include <cmath>
using namespace std;

// Area of circle
double area(double r) {
    return 3.1416 * r * r;
}

// Area of rectangle
double area(double l, double b) {
    return l * b;
}

// Area of triangle using Heron's formula
double area(double a, double b, double c) {
    double s = (a + b + c) / 2;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double r, l, b, a, x, y;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Circle Area = " << area(r) << endl;

    cout << "Enter length and breadth: ";
    cin >> l >> b;
    cout << "Rectangle Area = " << area(l, b) << endl;

    cout << "Enter three sides of triangle: ";
    cin >> a >> x >> y;
    cout << "Triangle Area = " << area(a, x, y) << endl;

    return 0;
}
