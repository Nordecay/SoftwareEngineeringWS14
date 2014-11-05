
#ifndef GRAMMTOOUNCES_H
#define GRAMMTOOUNCES_H

#include "converter.hpp"

class grammtoouncesconverter : public converter
{
public:
	grammtoouncesconverter();
	double convert(double inDollars);
	std::string toString() const;
	void print() const;
};

#endif //GRAMMTOOUNCES_H