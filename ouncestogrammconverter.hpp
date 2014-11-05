#ifndef OUNCESTOGRAMM_H
#define OUNCESTOGRAMM_H

#include "converter.hpp"

class ouncestogrammconverter : public converter
{
public:
	ouncestogrammconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif //OUNCESTOGRAMM_H