
#include <iostream>
using namespace std;

class Temperature
{
    double celsius;

public:
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    double toFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }

    void display()
    {
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << " F" << endl;
    }
};

int main()
{
    Temperature t;

    t.input();
    t.display();

    return 0;
}
