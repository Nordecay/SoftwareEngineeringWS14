#ifndef FOOTTOMETERCONVERTER_H
#define FOOTTOMETERCONVERTER_H

#include "converter.hpp"

class foottometerconverter : public converter
{
public:
	foottometerconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif // FOOTTOMETERCONVERTER_H