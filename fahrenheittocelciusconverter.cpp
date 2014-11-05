#include "fahrenheittocelciusconverter.hpp"

#include <string>

fahrenheittocelcius::fahrenheittocelcius()
{
}

/*In: double value of Fahrenheit
*Out:Celcius value of input  Fahrenheit
*/
double fahrenheittocelcius::convert(double inputFahrenheit){
	return (inputFahrenheit - 32) * 0.5555555555555556; 
}

std::string fahrenheittocelcius::toString() const{
	return "Fahrenheit to Celcius Converter";
}

void fahrenheittocelcius::print() const{
	std::cout << this->toString();
}
