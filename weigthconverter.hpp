#ifndef WEIGHTCONVERTER_HPP
#define WEIGHTCONVERTER_HPP

#include "converter.hpp"
#include "decorater.hpp"

//class WeightConverter : public converter
class WeightConverter : public Decorator_Pattern
{
public:
	WeightConverter(){}

	virtual double convert(double input) = 0;
	WeightConverter(std::shared_ptr<converter> decorator_weight) : Decorator_Pattern{ decorator_weight }{}
	
};


#endif //WEIGHTCONVERTER_HPP