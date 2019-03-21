#include "twostring.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    TwoStrings str;
    str.setString1();
    str.setString2();
    str.getString1();
    str.getString2();
    cout << str.getConnectedString() << endl;
    cout << str.getConnectedLength() << endl;

    return 0;
}