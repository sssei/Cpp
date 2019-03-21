#include <iostream>
#include "data.h"

using namespace std;

int main()
{
    CData c;
    int no;
    string str;

    c.init();
    c.get_number();
    c.get_comment();
    cout << "number:";
    cin >> no;
    cout << "comment:";
    cin >> str;
    c.set_number(no);
    c.set_comment(str);
    c.get_number();
    c.get_comment();

    return 0;
}