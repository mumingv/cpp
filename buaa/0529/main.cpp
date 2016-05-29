#include <iostream>
#include <stdlib.h>
#include "a.h"
#include "b.h"

using namespace std;

char *testM() {
    char *p = NULL;
    p = (char *)malloc(sizeof(char) * 10);
    return p;
}

// 无效
void swap1(int i, int j) {
    int temp;
    temp = i;
    i = j;
    j = temp;
}

// 有效
void swap2(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

// 有效
void swap3(int &i, int &j) {
    int temp;
    temp = i;
    i = j;
    j = temp;
}

// 无效
void swap4(int *i, int *j) {
    int *temp;
    temp = i;
    i = j;
    j = temp;
}

int main(int argc, char *argv[]) {
    /**
     * 指针&引用
     */
    int a = 3;
    int b = 5;
    swap1(a, b);
    cout << "sawp1: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap2(&a, &b);
    cout << "sawp2: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap3(a, b);
    cout << "sawp3: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap4(&a, &b);
    cout << "sawp4: " << "a = " << a << ", " << "b = " << b << endl;

    /**
     * 多态 
     */
    A *p = new B();
    p->f(); //如果A::f()不是虚函数则调用A::f()，如果A::f()是虚函数则调用B::f()，以此类推。
}

