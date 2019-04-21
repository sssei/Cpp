#include "function.h"
#include <iostream>

using namespace std;

int main()
{
    int m = 3, n = 2;
    cout << m << "と" << n << "のうちで最大のものは" << Function::max(m,n) << endl;
    cout << m << "と" << n << "のうちで最小のものは" << Function::min(m,n) << endl;
}