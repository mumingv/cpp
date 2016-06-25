#include <iostream>
#include <stdlib.h>
#include "a.h"
#include "b.h"

using namespace std;


void callVirtualFun(void *pThis, int index = 0) {
    void (*funptr)(void *);
}


int main(int argc, char *argv[]) {
    /**
     * 通过类型强转方式调用B类的函数
     */
    A *p = new B();
    p->print();  // A's print is executed.
    ((B *)p)->print();  // B's print is executed.



}

