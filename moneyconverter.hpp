#ifndef MONEYCONVERTER_HPP
#define MONEYCONVERTER_HPP

#include "converter.hpp"
#include "decorater.hpp"

//class MoneyConverter : public converter
class MoneyConverter : public Decorator_Pattern
{
public:
	
	MoneyConverter(){}
	virtual double convert(double input) = 0;
	MoneyConverter(std::shared_ptr<converter> decorator_money) : Decorator_Pattern{ decorator_money }{}

};





#endif //MONEYCONVERTER_HPP