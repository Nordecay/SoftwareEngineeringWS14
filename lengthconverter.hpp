#ifndef LENGTHCONVERTER_HPP
#define LENGTHCONVERTER_HPP
	
#include "converter.hpp"

class LengthConverter : public converter
{
public:
	virtual double convert(double input) = 0;


};


#endif 