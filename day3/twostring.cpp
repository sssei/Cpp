#include "twostring.h"
#include <string>
#include <iostream>

using namespace std;

void TwoStrings::setString1()
{
     cout << "m_string1:" ;
     cin >> m_string1;
}

void TwoStrings::setString2()
{
    cout << "m_string2";
    cin >> m_string2;
}

string TwoStrings::getString1()
{
    return m_string1;
}

string TwoStrings::getString2()
{
    return m_string2;
}

string TwoStrings::getConnectedString()
{
    return m_string1 + m_string2;
}

size_t TwoStrings::getConnectedLength()
{
    return m_string1.length() + m_string2.length();
}