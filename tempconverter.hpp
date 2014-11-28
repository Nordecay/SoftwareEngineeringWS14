#ifndef TEMPCONVERTER_HPP
#define TEMPCONVERTER_HPP

#include "converter.hpp"

class TempConverter : public converter
{
public:
	virtual double convert(double input) = 0;


};


#endif //TEMPCONVERTER_HPP