#include "bird.h"
#include "chicken.h"
#include <iostream>
#include <string>

int main(){
  CBird* b1, b2;
  b1 = new CChicken();
  b1->sing();
  b1->fly();
}
