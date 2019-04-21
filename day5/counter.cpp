#include "counter.h"

Count::Count() : m_count(0){   
}

int Count::m_totalCount = 0;

void Count::reset(){
    m_totalCount -= m_count;
    m_count = 0;
}

void Count::count(){
    m_count++;
    m_totalCount++;
}

