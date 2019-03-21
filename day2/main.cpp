#include <iostream>
#include "minmax.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 3;
    int c = 9;
    MinMax m;
    cout << "最大の数:" << m.max(a,b,c) << endl;
    cout << "最小の数:" << m.min(a,b,c) << endl;

    return 0;
}