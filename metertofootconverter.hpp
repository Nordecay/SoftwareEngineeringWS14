#ifndef METERTOFOOTCONVERTER_H
#define METERTOFOOTCONVERTER_H

#include "converter.hpp"

class metertofootconverter : public converter
{
public:
	metertofootconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif // METERTOFOOTCONVERTER_H