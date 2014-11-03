#include "eurotodollarconverter.hpp"

#include <string>

EuroTodollarConverter::EuroTodollarConverter()
{
}

/*In: double value of dollars
*Out: Dollar value of input Euro as of 19.10.14
*/
double EuroTodollarConverter::convert(double inputDollars){
	return inputDollars / 0.78224;
}

std::string EuroTodollarConverter::toString() const{
	return "Euro to Dollar Converter";
}

void EuroTodollarConverter::print() const{
	std::cout << this->toString();
}
