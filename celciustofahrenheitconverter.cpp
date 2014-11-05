#include "celciustofahrenheitconverter.hpp"

#include <string>

celciustofahrenheit::celciustofahrenheit()
{
}

/*In: double value of Celcius
*Out: Fahrenheit value of input Celcius
*/
double celciustofahrenheit::convert(double inputCelcius){
	return (inputCelcius*1.8)+32;
}

std::string celciustofahrenheit::toString() const{
	return "Celcius to Fahrenheit Converter";
}

void celciustofahrenheit::print() const{
	std::cout << this->toString();
}
