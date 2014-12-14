#include "converter.hpp"

converter::converter()
{


}

double converter::ToDouble(std::string InValue)
{
	std::stringstream income_;
	income_ << InValue;
	double out_value;
	income_ >> out_value;
	return out_value;
}

