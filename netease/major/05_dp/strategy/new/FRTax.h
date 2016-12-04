#include "TaxStrategy.h"

// 法国的税
class FRTax : public TaxStrategy {
public:
    virtual double Calculate();
};
