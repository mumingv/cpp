/***********************************************************
 *     FileName: template2_lib.cpp
 *         Desc: ģ��ģʽ
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-26 20:23:03
 *      History:
 ***********************************************************/
#include <iostream>
#include "template2_lib.h"

using namespace std;

//����⿪����Ա
void Library::run(){
    step1();
    if (step2()) {  // ֧�ֱ仯��ʹ���麯���Ķ�̬��������
        step3(); 
    }
    for (int i = 0; i < 4; i++){
        step4();  // ֧�ֱ仯��ʹ���麯���Ķ�̬��������
    }
    step5();
}

void Library::step1() {
    cout << "process Library's " << __FUNCTION__ << endl;
}

void Library::step3() {
    cout << "process Library's " << __FUNCTION__ << endl;
}

void Library::step5() {
    cout << "process Library's " << __FUNCTION__ << endl;
}
