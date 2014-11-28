#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

//#include "converter.hpp"
#include "moneyconverter.hpp"


class EuroTodollarConverter : public MoneyConverter
{
public:
	EuroTodollarConverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new EuroTodollarConverter();
	}
};

#endif // DOLLARTOEUROCONVERTER_H