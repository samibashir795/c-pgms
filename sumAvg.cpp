#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;

    cout << "Enter an integer: ";
    cin >> n;

    sum = n;
    avg = sum / 1.0;

    cout << "Sum = " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << avg << endl;

    return 0;
}