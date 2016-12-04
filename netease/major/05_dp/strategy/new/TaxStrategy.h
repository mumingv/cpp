/***********************************************************
 *     FileName: TaxStrategy.h
 *         Desc: 策略模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-12-04 16:47:31
 *      History:
 ***********************************************************/

#ifndef TAX_STRATEGY_H
#define TAX_STRATEGY_H

// 税的策略基类，各国税的计算均从此类继承
class TaxStrategy{
public:
    virtual double Calculate() = 0;
    virtual ~TaxStrategy() {
    }
};

#endif
