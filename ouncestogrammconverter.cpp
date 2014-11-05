#include "ouncestogrammconverter.hpp"

#include <string>

ouncestogrammconverter::ouncestogrammconverter()
{
}

/*In: double value of Ounces
*Out: Gramm value of input Ounces
*/
double ouncestogrammconverter::convert(double inputOunces){
	return inputOunces / 0.035274;
}

std::string ouncestogrammconverter::toString() const{
	return "Dollar to Euro Converter";
}

void ouncestogrammconverter::print() const{
	std::cout << this->toString();
}
