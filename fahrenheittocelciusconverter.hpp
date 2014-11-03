#ifndef FAHRENHEITTOCELCIUS_H
#define FAHRENHEITTOCELCIUS_H

#include "converter.hpp"

class fahrenheittocelcius : public converter
{
public:
	fahrenheittocelcius();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif //FAHRENHEITTOCELCIUS_H