#include "calculation.h"
#include <iostream>

using namespace std;

int main()
{
    Calculation c;
    c.setNumber1(3);
    c.setNumber2(5);
    cout << c.getNumber1() << endl;
    cout << c.getNumber2() << endl;
    cout << c.add() << endl;
    cout << c.sub() << endl;

    return 0;
}