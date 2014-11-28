#ifndef CELCIUSTOFAHRENHEIT_H
#define CELCIUSTOFAHRENHEIT_H

//#include "converter.hpp"
#include "tempconverter.hpp"

class celciustofahrenheit : public TempConverter
{
public:
	celciustofahrenheit();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new celciustofahrenheit();
	}
};

#endif //CELCIUSTOFAHRENHEIT_H