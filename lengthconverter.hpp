#ifndef LENGTHCONVERTER_HPP
#define LENGTHCONVERTER_HPP
	
#include "converter.hpp"
#include "decorater.hpp"
//class LengthConverter : public converter
class LengthConverter : public Decorator_Pattern
{
public:
	LengthConverter(){}

	virtual double convert(double input) = 0;
	LengthConverter(std::shared_ptr<converter> decorator_length) : Decorator_Pattern{ decorator_length } {}

};


#endif 