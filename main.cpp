#include "converter.hpp"

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"
#include "ouncestogrammconverter.hpp"
#include "grammtoouncesconverter.hpp"

#include "Factory.hpp"

#include "singleton.hpp"

/**/
int main(int argc, char* argv[])
{

	std::string conversion = (argc >= 2) ? argv[1] : "";
	std::string value = (argc >= 3) ? argv[2] : "";
	double InValue = 0;



	if (value != "")
	{
		InValue = converter::ToDouble(value);
	}
	else
	{
		InValue = 0;
	}


	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create(conversion);

	if (converter != nullptr)
	{
		double converted_value = converter->convert(InValue);
		std::cout << converter->toString() << " : " << converted_value << std::endl;
	}

}
