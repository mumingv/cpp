#ifndef _A_H
#define _A_H

class A {
    public:
        A(); //构造函数
        ~A(); //析构函数
        //void f();
        virtual void f();
        //void print();
        virtual void print();
    private:
        int i;
        void mm();
};

#endif

