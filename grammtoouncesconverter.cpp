#include "grammtoouncesconverter.hpp"

#include <string>

grammtoouncesconverter::grammtoouncesconverter()
{
}

/*In: double value of Ounces
*Out: Gramm value of input Ounces
*/
double grammtoouncesconverter::convert(double inputOunces){
	return inputOunces * 0.035274;
}

std::string grammtoouncesconverter::toString() const{
	return "Dollar to Euro Converter";
}

void grammtoouncesconverter::print() const{
	std::cout << this->toString();
}