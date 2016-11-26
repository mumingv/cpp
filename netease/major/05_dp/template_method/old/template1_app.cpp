/***********************************************************
 *     FileName: template1_app.cpp
 *         Desc: 未使用模板模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-26 17:18:18
 *      History:
 ***********************************************************/
#include <iostream>
#include "template1_lib.h"

using namespace std;

//应用程序开发人员
class Application {
public:
    bool step2() {
        cout << "process " << __FUNCTION__ << endl;
    }

    void step4() {
        cout << "process " << __FUNCTION__ << endl;
    }
};

int main() {
    Library lib;
    Application app;

    lib.step1();

    if (app.step2()) {
        lib.step3();
    }

    for (int i = 0; i < 4; i++) {
        app.step4();
    }

    lib.step5();
}
