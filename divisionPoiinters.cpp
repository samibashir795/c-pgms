
#include <iostream>
using namespace std;

bool divide(int a, int b, int *q, int *r) {

    if (b == 0 || q == nullptr || r == nullptr) {
        return false;
    }

    *q = a / b;
    *r = a % b;

    return true;
}

int main() {
    int a, b;
    int q, r;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (divide(a, b, &q, &r)) {
        cout << "Quotient = " << q << endl;
        cout << "Remainder = " << r << endl;
    }
    else {
        cout << "Division not possible";
    }

    return 0;
}
