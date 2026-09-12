#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int largest, smallest;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    // Finding largest
    if (a > b) {
        if (a > c) {
            if (a > d)
                largest = a;
            else
                largest = d;
        }
        else {
            if (c > d)
                largest = c;
            else
                largest = d;
        }
    }
    else {
        if (b > c) {
            if (b > d)
                largest = b;
            else
                largest = d;
        }
        else {
            if (c > d)
                largest = c;
            else
                largest = d;
        }
    }

    // Finding smallest
    if (a < b) {
        if (a < c) {
            if (a < d)
                smallest = a;
            else
                smallest = d;
        }
        else {
            if (c < d)
                smallest = c;
            else
                smallest = d;
        }
    }
    else {
        if (b < c) {
            if (b < d)
                smallest = b;
            else
                smallest = d;
        }
        else {
            if (c < d)
                smallest = c;
            else
                smallest = d;
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}