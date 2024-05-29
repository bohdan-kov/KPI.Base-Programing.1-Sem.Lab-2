#define _USE_MATH_DEFINES // for C++

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int num_bus;
    cout << "Input number bus (available bus numbers: 55, 57, 61, 65): " << endl;
    cin >> num_bus;
    
    switch (num_bus)
    {
    case 55: {
        cout << M_PI;
        cout << "The number of stops is 21" << endl;
        break;
        }
    case 57: {
        cout << "The number of stops is 26" << endl;
        break;
    }
    case 61: {
        cout << "The number of stops is 18" << endl;
        break;
    }   
    case 65: {
        cout << "The number of stops is 19" << endl;
        break;
    }
    default:
        cout << "Bus with number " << num_bus << " not found" << endl;
        break;
    }
}
