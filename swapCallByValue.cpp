
#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before function call:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapByValue(a, b);

    cout << "After function call:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
