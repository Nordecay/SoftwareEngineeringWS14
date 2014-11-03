#include "fahrenheittocelciusconverter.hpp"

#include <string>

fahrenheittocelcius::fahrenheittocelcius()
{
}

/*In: double value of Celcius
*Out: Fahrenheit value of input Celcius
*/
double fahrenheittocelcius::convert(double inputCelcius){
	return (inputCelcius - 32) * 0.5555555555555556;
}

std::string fahrenheittocelcius::toString() const{
	return "Dollar to Euro Converter";
}

void fahrenheittocelcius::print() const{
	std::cout << this->toString();
}
