#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int fail = 0;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    if (m1 < 35) fail++;
    if (m2 < 35) fail++;
    if (m3 < 35) fail++;
    if (m4 < 35) fail++;
    if (m5 < 35) fail++;

    if (fail > 1)
    {
        cout << "Repeat Year";
    }
    else
    {
        cout << "\nGrades:\n";

        if (m1 >= 75)
            cout << "Subject 1: A Grade\n";
        else if (m1 >= 60)
            cout << "Subject 1: B Grade\n";
        else if (m1 >= 35)
            cout << "Subject 1: C Grade\n";
        else
            cout << "Subject 1: Fail\n";

        if (m2 >= 75)
            cout << "Subject 2: A Grade\n";
        else if (m2 >= 60)
            cout << "Subject 2: B Grade\n";
        else if (m2 >= 35)
            cout << "Subject 2: C Grade\n";
        else
            cout << "Subject 2: Fail\n";

        if (m3 >= 75)
            cout << "Subject 3: A Grade\n";
        else if (m3 >= 60)
            cout << "Subject 3: B Grade\n";
        else if (m3 >= 35)
            cout << "Subject 3: C Grade\n";
        else
            cout << "Subject 3: Fail\n";

        if (m4 >= 75)
            cout << "Subject 4: A Grade\n";
        else if (m4 >= 60)
            cout << "Subject 4: B Grade\n";
        else if (m4 >= 35)
            cout << "Subject 4: C Grade\n";
        else
            cout << "Subject 4: Fail\n";

        if (m5 >= 75)
            cout << "Subject 5: A Grade\n";
        else if (m5 >= 60)
            cout << "Subject 5: B Grade\n";
        else if (m5 >= 35)
            cout << "Subject 5: C Grade\n";
        else
            cout << "Subject 5: Fail\n";
    }

    return 0;
}