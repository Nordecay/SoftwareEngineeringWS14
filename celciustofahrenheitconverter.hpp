#ifndef CELCIUSTOFAHRENHEIT_H
#define CELCIUSTOFAHRENHEIT_H

#include "converter.hpp"

class celciustofahrenheit : public converter
{
public:
	celciustofahrenheit();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif //CELCIUSTOFAHRENHEIT_H