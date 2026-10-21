#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Enter a number (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Invalid input";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial = " << fact;
    }

    return 0;
}