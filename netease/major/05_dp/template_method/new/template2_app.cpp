/***********************************************************
 *     FileName: template2_app.cpp
 *         Desc: ģ��ģʽ
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

//Ӧ�ó��򿪷���Ա
class Application : public Library {
protected:
    // �����еĴ��麯������Ҫ�������н�����д(override)
    virtual bool step2() {
        cout << "process Application's " << __FUNCTION__ << endl;
    }

    // �����еĴ��麯������Ҫ�������н�����д(override)
    virtual void step4() {
        cout << "process Application's " << __FUNCTION__ << endl;
    }
};

int main()
{
    // ����ָ��ָ������������ͨ����ָ����õĺ������麯���Ļ���������̬������
    Library* lib = new Application();
    lib->run();
    delete lib;
}
