/***********************************************************
 *     FileName: strategy1.cpp
 *         Desc: δʹ��ģ��ģʽ
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-12-04 16:18:50
 *      History:
 ***********************************************************/
#include <iostream>
#include "strategy2.h"
#include "CNTax.h"
#include "USTax.h"
#include "DETax.h"
#include "FRTax.h"

using namespace std;

SalesOrder::SalesOrder(TaxStrategy* taxStrategy) : strategy(taxStrategy) {
}

double SalesOrder::CalculateTax(){
    strategy->Calculate(); //��̬����
}

int main() {
    SalesOrder order(new FRTax);
    order.CalculateTax();
}
