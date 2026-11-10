
#include <iostream>
using namespace std;

void circleMeasures(double r, double &area, double &circumference) {
    const double PI = 3.14159;

    area = PI * r * r;
    circumference = 2 * PI * r;
}

int main() {
    double r, area, circumference;

    cout << "Enter radius: ";
    cin >> r;

    circleMeasures(r, area, circumference);

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
