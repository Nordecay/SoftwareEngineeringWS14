#include "metertofootconverter.hpp"

#include <string>

metertofootconverter::metertofootconverter()
{
}

/*In: double value of Meter
*Out: Foot value of input Meter as of 19.10.14
*/
double metertofootconverter::convert(double inputmeter){
	return inputmeter *3.2808;
}

std::string metertofootconverter::toString() const{
	return "Meter to Foot Converter ";
}

void metertofootconverter::print() const{
	std::cout << this->toString();
}
