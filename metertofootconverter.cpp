#include "metertofootconverter.hpp"

#include <string>

metertofootconverter::metertofootconverter()
{
}

/*In: double value of dollars
*Out: Dollar value of input Euro as of 19.10.14
*/
double metertofootconverter::convert(double inputDollars){
	return inputDollars *3.2808;
}

std::string metertofootconverter::toString() const{
	return "Meter to Foot Converter ";
}

void metertofootconverter::print() const{
	std::cout << this->toString();
}
