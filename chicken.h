#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class CChicken : public CBird{
  void sing(){
    cout << "カーカー" << endl;
  }
  void fly(){
    cout << "鶏が飛びます" << endl;
  }
};

#endif
