
#ifndef GRAMMTOOUNCES_H
#define GRAMMTOOUNCES_H

//#include "converter.hpp"
#include "weigthconverter.hpp"

class grammtoouncesconverter : public WeightConverter
{
public:
	grammtoouncesconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new grammtoouncesconverter();
	}

};

#endif //GRAMMTOOUNCES_H