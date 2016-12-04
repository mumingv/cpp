#include "TaxStrategy.h"

// 中国的税
class CNTax : public TaxStrategy {
public:
    virtual double Calculate();
};
