#include <iostream>
using namespace std;

int main()
{
    float x, y;
    char work_type;
    cout << "Input type work? (A, B, C)" << endl;
    cin >> work_type;
    cout << "Input x:" << endl;
    cin >> x;

    if (work_type == 'A') {
        y = 100 * abs(2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x - 1.5) - 6 + 50);
        cout << "Charged amount: " << y << endl;
        cout << "Tax amount: " << 0.1 * y << endl;
        cout << "Amount to issue: " << 0.9 * y << endl;
    }
    if (work_type == 'B') {
        y = 150 * abs(abs(cos(pow(x, 2) - 0.51)) * sin(3 * x - 4) - 4.44 + 100);
        cout << "Charged amount: " << y << endl;
        cout << "Tax amount: " << 0.15 * y << endl;
        cout << "Amount to issue: " << 0.85 * y << endl;
    }
    if (work_type == 'C') {
        y = 100 * abs(abs(cos(2.1 * x) * sin(x)) / 0.15 - 5.8 + 135);
        cout << "Charged amount: " << y << endl;
        cout << "Tax amount: " << 0.2 * y << endl;
        cout << "Amount to issue: " << 0.8 * y << endl;
    }
    if (work_type != 'A' && work_type != 'B' && work_type != 'C')
    {
        cout << "Incorrect data was entered" << endl;
    }
}
