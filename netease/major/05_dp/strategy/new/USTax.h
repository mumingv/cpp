#include "TaxStrategy.h"

// 美国的税
class USTax : public TaxStrategy {
public:
    virtual double Calculate();
};
