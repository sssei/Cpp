#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
  Vector mv(1.4,4.2);
  cout << "x:" << mv.getX() << "y:" << mv.getY() << endl;
  mv.set(1,2);
  cout << "x:" << mv.getX() << "y:" << mv.getY() << endl;
}
