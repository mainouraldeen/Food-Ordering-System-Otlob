#include "MoneyValueVoucher.h"

using System::String;
using namespace System;
MoneyValueVoucher::MoneyValueVoucher()
{
}

float MoneyValueVoucher::CalculateDiscount(float Tprice)
{
	String^ valueOfVoucherLastNum;
	String^ valueOfVoucherBeforLast;
	valueOfVoucherLastNum = code[code->Length - 1].ToString();
	valueOfVoucherBeforLast = code[code->Length - 2].ToString();
	int x = Convert::ToInt32(valueOfVoucherLastNum);
	int y = Convert::ToInt32(valueOfVoucherBeforLast);

	x += (y) * 10;
	return Tprice - x;
}
