#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object{
    private:
        static int m_objectNum;
    public:
        static void getObjectNum();
        Object();
        ~Object();
};

#endif 

