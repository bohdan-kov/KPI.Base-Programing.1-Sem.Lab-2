#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y = 0;
    int a = 3.1;
    cout << "Input x: ";
    cin >> x;

    if (x < -1) {
        y = -x - 1;
    }
    else if (x >= -1 && x < 1) {
        y = 1 - (pow(x, 2) * cos(x * M_PI));
    }
    else {
        y = x - (1 - sqrt(pow(a, 3)));
    }
    cout << "Output y: " << y << endl;
}
