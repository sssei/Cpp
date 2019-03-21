#ifndef _TWOSTRING_H_
#define _TWOSTRING_H_

#include <string>

using namespace std;

class TwoStrings{
    private:
        string m_string1;
        string m_string2;
    public:
        void setString1();
        void setString2();
        string getString1();
        string getString2();
        string getConnectedString();
        size_t getConnectedLength();
};

#endif