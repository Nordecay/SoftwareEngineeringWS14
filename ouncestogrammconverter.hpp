#ifndef OUNCESTOGRAMM_H
#define OUNCESTOGRAMM_H

//#include "converter.hpp"
#include "weigthconverter.hpp"

class ouncestogrammconverter : public WeightConverter
{
public:
	ouncestogrammconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new ouncestogrammconverter();
	}
};

#endif //OUNCESTOGRAMM_H