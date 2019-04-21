#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
    private:
        int m_count;
        static int m_totalCount;
    public:
        Counter();
        void count();
        void reset();
        int getCount();
        static int getTotalCount();
};

#endif