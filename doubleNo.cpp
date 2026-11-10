
#include <iostream>
using namespace std;

void change(int x) {
    x = x * 2;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 5;

    change(a);
    change(a);

    cout << "Original value = " << a;

    return 0;
}
