#include <iostream>

class A {
    public:
        void f() {
            std::cout << "A::f() is called" << std::endl;
        }
};

class B : public A {
    public:
        void f() {
            std::cout << "B::f() is called" << std::endl;
        }
};

int main() {
    A *ptr = new B();
    ptr->f();  // A::f() is called
    return 0;
}
