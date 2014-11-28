#ifndef FOOTTOMETERCONVERTER_H
#define FOOTTOMETERCONVERTER_H

//#include "converter.hpp"
#include "lengthconverter.hpp"

class foottometerconverter : public LengthConverter
{
public:
	foottometerconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new foottometerconverter();
	}
};

#endif // FOOTTOMETERCONVERTER_H






	
