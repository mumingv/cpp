#include "TaxStrategy.h"

// 德国的税
class DETax : public TaxStrategy {
public:
    virtual double Calculate();
};
