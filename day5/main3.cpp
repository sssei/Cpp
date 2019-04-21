#include "counter.h"
#include <iostream>

using namespace std;

int main()
{
    Count c1,c2,c3;
    c1.count();
    c2.count();
    c3.count();
    cout << Count::getTotalCount() << endl;
    c3.count();
    c3.count();
    cout << Count::get
}