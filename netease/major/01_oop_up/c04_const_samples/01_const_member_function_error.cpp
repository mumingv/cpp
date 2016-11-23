/***********************************************************
 *     FileName: 01_const_member_function_error.cpp
 *         Desc: 如果在函数声明的时候没有使用const关键字，但是使用者在实例话对象的时候却使用了const关键字；那么这个时候编译器就会报错。
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-23 09:28:07
 *      History:
 ***********************************************************/

/**
 * 总结一句话就是：常量对象不能调用普通成员函数。 
 */

#include <iostream>

using namespace std;

class complex
{
public:
    complex (double r = 0, double i = 0): re (r), im (i) { }

    // 非常量成员函数
    double real () { return re; }
    // 常量成员函数
    double imag () const { return im; }
private:
    double re, im;
};

int main() {
    const complex c1(2, 1);
    cout << c1.real();
    cout << c1.imag();
}
