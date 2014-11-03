#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "converter.hpp"

class EuroTodollarConverter : public converter
{
public:
	EuroTodollarConverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H