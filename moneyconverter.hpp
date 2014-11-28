#ifndef MONEYCONVERTER_HPP
#define MONEYCONVERTER_HPP

#include "converter.hpp"

class MoneyConverter : public converter
{
public:
	virtual double convert(double input) = 0;


};


#endif //MONEYCONVERTER_HPP