
#include <iostream>
using namespace std;

void swapByRef(int &a, int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapByRef(a, b);

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
