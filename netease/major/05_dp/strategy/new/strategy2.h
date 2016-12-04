/***********************************************************
 *     FileName: strategy2.h
 *         Desc: 策略模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-12-04 16:35:47
 *      History:
 ***********************************************************/
#include "TaxStrategy.h"

class SalesOrder{
private:
    TaxStrategy* strategy;  // 策略类的多态指针

public:
    /* 最好使用工厂模式创建对象，这里进行了简化，为了说明策略模式的使用方式
    SalesOrder(StrategyFactory* strategyFactory){
        this->strategy = strategyFactory->NewStrategy();
    }
    */
    SalesOrder(TaxStrategy* taxStrategy);
    ~SalesOrder() {
        delete this->strategy;
    }

    double CalculateTax();
};
