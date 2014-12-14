#include "eurotodollarconverter.hpp"

#include <string>

EuroTodollarConverter::EuroTodollarConverter()
{
}

/*In: double value of dollars
*Out: Dollar value of input Euro as of 19.10.14
*/
/* Exercise 04
double EuroTodollarConverter::convert(double inputDollars){
	return inputDollars / 0.78224;
}
*/
/* Exercise 5 */
double EuroTodollarConverter::convert(double inputDollars){
	if (decorater == nullptr)
		return inputDollars / 0.78224;
	else
		return decorater->convert(inputDollars / 0.78224);

}


std::string EuroTodollarConverter::toString() const{
	return "Euro to Dollar Converter";
}

void EuroTodollarConverter::print() const{
	std::cout << this->toString();
}

std::shared_ptr<converter> EuroTodollarConverter::create()
{
	return std::make_shared<EuroTodollarConverter>();
}