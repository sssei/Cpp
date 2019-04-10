#include <iostream>
#include "number.h"

using namespace std;

int main(){
  Number *pN;
  pN = new Number();
  cout << pN->getAdd() << endl;
  pN->setNumbers(1,2);
  cout << pN->getAdd() << endl;
  return 0;
  delete pN;
}  
