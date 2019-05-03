#include "newcalc.h"
#include <iostream>

using namespace std;

int main()
{
  NewCalc n;
  n.setNumber1(3);
  n.setNumber2(5);
  cout << n.getNumber1() << "+" << n.getNumber2() << "=" << n.add() << endl;
  cout << n.getNumber1() << "-" << n.getNumber2() << "=" << n.sub() << endl;
  cout << n.getNumber1() << "*" << n.getNumber2() << "=" << n.mul() << endl;
  cout << n.getNumber1() << "/" << n.getNumber2() << "=" << n.div() << endl;
}
