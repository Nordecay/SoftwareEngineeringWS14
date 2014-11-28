#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

//#include "converter.hpp"
#include "moneyconverter.hpp"

class dollarToEuroConverter : public MoneyConverter
{
  public:
    dollarToEuroConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;

	static converter* create()
	{
		return new dollarToEuroConverter();
	}
};

#endif // DOLLARTOEUROCONVERTER_H
