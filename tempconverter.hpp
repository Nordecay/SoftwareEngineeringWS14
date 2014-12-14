#ifndef TEMPCONVERTER_HPP
#define TEMPCONVERTER_HPP

#include "converter.hpp"
#include "decorater.hpp"

//class TempConverter : public converter
class TempConverter : public Decorator_Pattern
{
public:
	TempConverter(){}

	virtual double convert(double input) = 0;
	TempConverter(std::shared_ptr<converter> decorator_weight) : Decorator_Pattern{ decorator_weight }{}

};


#endif //TEMPCONVERTER_HPP