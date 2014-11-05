#include "foottometerconverter.hpp"

#include <string>

foottometerconverter::foottometerconverter()
{
}

/*In: double value of Foot
*Out: Meter value of input Foot 
*/
double foottometerconverter::convert(double inputfoot){
	return inputfoot / 3.2808;
}

std::string foottometerconverter::toString() const{
	return "Foot to Meter Converter ";
}

void foottometerconverter::print() const{
	std::cout << this->toString();
}
