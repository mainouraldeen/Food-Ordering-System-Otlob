#pragma once
using System::String;

ref class Voucher
{
protected: String^  code;

public:
	Voucher();
	virtual String^ get() { return code; }
	virtual void set(String ^ cod) { code = cod; }
	virtual float CalculateDiscount(float totalPrice) = 0;

};


