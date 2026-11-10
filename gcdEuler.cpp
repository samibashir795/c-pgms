
#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    int x, y, gcd, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Save original inputs
    x = a;
    y = b;

    // Euclid's method to find GCD
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    gcd = a;

    // Calculate LCM
    lcm = (x * y) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
