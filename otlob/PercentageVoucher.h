
#include "Voucher.h"
ref class PercentageVoucher : public Voucher
{
public:
	PercentageVoucher();
	float CalculateDiscount(float Tprice) override;

};
