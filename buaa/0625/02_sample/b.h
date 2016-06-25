#ifndef _B_H
#define _B_H
#include "a.h"

class B : public A {
    public:
        /* 
         * 关于虚函数：
         * 1. 父类的析构函数为虚函数，则子类的析构函数则为虚函数，不管析构函数是否相同；
         * 2. 父类的函数为虚函数，则子类的同名函数也为虚函数；
         */
        B();
        ~B();
        void f();
        void print();
};

#endif

