/***********************************************************
 *     FileName: strategy1.h
 *         Desc: 未使用策略模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-12-04 16:17:12
 *      History:
 ***********************************************************/

enum TaxBase {
    CN_Tax,
    US_Tax,
    DE_Tax,
    FR_Tax       //更改
};

class SalesOrder{
public:
    TaxBase tax;
public:
    SalesOrder(TaxBase base);
    double CalculateTax();
};
