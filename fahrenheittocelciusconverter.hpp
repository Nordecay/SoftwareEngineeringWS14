#ifndef FAHRENHEITTOCELCIUS_H
#define FAHRENHEITTOCELCIUS_H

//#include "converter.hpp"
#include "tempconverter.hpp"

class fahrenheittocelcius : public TempConverter

{
public:
	fahrenheittocelcius();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new fahrenheittocelcius();
	}
};

#endif //FAHRENHEITTOCELCIUS_H