/***********************************************************
 *     FileName: template1_lib.cpp
 *         Desc: 未使用模板模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-26 17:14:24
 *      History:
 ***********************************************************/
#include <iostream>
#include "template1_lib.h"

using namespace std;

//程序库开发人员
void Library::step1() {
    cout << "process " << __FUNCTION__ << endl;
}

void Library::step3() {
    cout << "process " << __FUNCTION__ << endl;
}

void Library::step5() {
    cout << "process " << __FUNCTION__ << endl;
}
