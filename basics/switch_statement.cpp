#include <iostream>
#include "basics.hpp"
using namespace std;

void dayDate(int num)
{
    switch (num)
    {
    case 1:
        cout << "Monday" << endl;
        break; // takes out of all the condition loops

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid Day" << endl;
        break;
    }
}