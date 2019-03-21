#include "data.h"
#include <iostream>

using namespace std;

void CData::init()
{
    number = 0;
    comment = "";
}

void CData::set_number(int num)
{
    number = num;
}

void CData::set_comment(string s)
{
    comment = s;
}

void CData::get_number()
{
    cout << number << endl;
}

void CData::get_comment()
{
    cout << comment << endl;
}