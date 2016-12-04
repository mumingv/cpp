/***********************************************************
 *     FileName: strategy1.cpp
 *         Desc: 未使用模板模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-12-04 16:18:50
 *      History:
 ***********************************************************/
#include <iostream>
#include "strategy1.h"

using namespace std;

SalesOrder::SalesOrder(TaxBase base) : tax(base) {
}

double SalesOrder::CalculateTax(){
    if (tax == CN_Tax){
        cout << "CalculateTax using CN_Tax" << endl;
    }
    else if (tax == US_Tax){
        cout << "CalculateTax using US_Tax" << endl;
    }
    else if (tax == DE_Tax){
        cout << "CalculateTax using DE_Tax" << endl;
    }
    else if (tax == FR_Tax){  //更改
        cout << "CalculateTax using FR_Tax" << endl;
    } else {
        cout << "Error tax type!" << endl;
    }
}

int main() {
    SalesOrder order(FR_Tax);
    order.CalculateTax();
}
