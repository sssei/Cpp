#include "object.h"

int main(){
    Object* obj1;
    Object* obj2;
    obj1 = new Object();
    Object::getObjectNum(); 
    obj2 = new Object();
    Object::getObjectNum();
    delete obj1;
    Object::getObjectNum();
}