#include <iostream>
using namespace std;

void printLine(char ch, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    printLine('*', 20);
    cout << "   Your Name" << endl;
    printLine('*', 20);

    return 0;
}