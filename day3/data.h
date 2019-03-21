#ifndef _CDATA_H_
#define _CDATA_H_
#include <string>

using namespace std;

class CData{
    private: 
        int number;
        string comment;
    public:
        void init();
        void set_number(int);
        void set_comment(string);
        void get_number();
        void get_comment();
};

#endif