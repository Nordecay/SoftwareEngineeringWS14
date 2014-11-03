#include "foottometerconverter.hpp"

#include <string>

foottometerconverter::foottometerconverter()
{
}

/*In: double value of dollars
*Out: Dollar value of input Euro as of 19.10.14
*/
double foottometerconverter::convert(double inputDollars){
	return inputDollars /3.2808;
}

std::string foottometerconverter::toString() const{
	return "Foot to Meter Converter ";
}

void foottometerconverter::print() const{
	std::cout << this->toString();
}
