#pragma once
#include "Voucher.h"
ref class MoneyValueVoucher : public Voucher
{

public:
	MoneyValueVoucher();
	float CalculateDiscount(float Tprice) override;


};
