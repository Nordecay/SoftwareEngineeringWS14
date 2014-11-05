#include "grammtoouncesconverter.hpp"

#include <string>

grammtoouncesconverter::grammtoouncesconverter()
{
}

/*In: double value of Gramm
*Out: Ounces value of input Gramm
*/
double grammtoouncesconverter::convert(double inputGramm){
	return inputGramm * 0.035274;
}

std::string grammtoouncesconverter::toString() const{
	return "Gramm to Ounces Converter";
}

void grammtoouncesconverter::print() const{
	std::cout << this->toString();
}