#include "counter.h"

Counter::Counter() : m_count(0){   
}

int Counter::m_totalCount = 0;

void Counter::reset(){
    m_totalCount -= m_count;
    m_count = 0;
}

void Counter::count(){
    m_count++;
    m_totalCount++;
}

int Counter::getTotalCount(){
  return m_totalCount;
}
