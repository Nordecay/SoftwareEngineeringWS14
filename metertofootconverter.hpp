#ifndef METERTOFOOTCONVERTER_H
#define METERTOFOOTCONVERTER_H

//#include "converter.hpp"
#include "lengthconverter.hpp"

class metertofootconverter : public LengthConverter
{
public:
	metertofootconverter();
	double convert(double inmeter);
	std::string toString() const;
	void print() const;

	static converter* create()
	{
		return new metertofootconverter();
	}
};

#endif // METERTOFOOTCONVERTER_H