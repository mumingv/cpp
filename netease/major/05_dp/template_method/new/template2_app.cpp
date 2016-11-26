/***********************************************************
 *     FileName: template2_app.cpp
 *         Desc: 模板模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-26 20:30:53
 *      History:
 ***********************************************************/
#include <iostream>
#include "template2_lib.h"

using namespace std;

//应用程序开发人员
class Application : public Library {
protected:
    // 基类中的纯虚函数必须要在子类中进行重写(override)
    virtual bool step2() {
        cout << "process Application's " << __FUNCTION__ << endl;
    }

    // 基类中的纯虚函数必须要在子类中进行重写(override)
    virtual void step4() {
        cout << "process Application's " << __FUNCTION__ << endl;
    }
};

int main()
{
    // 基类指针指向子类对象，如果通过该指针调用的函数是虚函数的话则会产生多态性特征
    Library* lib = new Application();
    lib->run();
    delete lib;
}
