#include "object.h"
#include <iostream>

using namespace std;

int Object::m_objectNum = 0;

void Object::getObjectNum(){
    cout << m_objectNum << endl;
}

Object::Object(){
    m_objectNum++;
}

Object::~Object(){
    m_objectNum--;
}