// CSC 134
// M3T1
// Sebastian Camacho
// 02/22/2025

#include <iostream>

using namespace std;

int main()
{
    // variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // user input
    cout << "Please enter the width and height of the first" << endl;
    cout << "reactangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "reactangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // calculations
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;

    // which is bigger
    if (areaOne > areaTwo) {
        cout << "Recatangle one is bigger" << endl;
    }

    else if (areaTwo > areaOne) {
        cout << "Rectangle two is bigger" << endl;
    }

    else if (areaOne == areaTwo) {
        cout << "They are the same size" << endl;
    }

    return 0;
}