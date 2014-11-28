#ifndef WEIGHTCONVERTER_HPP
#define WEIGHTCONVERTER_HPP

#include "converter.hpp"

class WeightConverter : public converter
{
public:
	virtual double convert(double input) = 0;


};


#endif //WEIGHTCONVERTER_HPP