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

#include "decorater.hpp"
#include "command_Pattern.hpp"

#include <deque>



/**/
int main(int argc, char* argv[])
{
	/*
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
	*/

	// ********** TASK 1 *********
	std::shared_ptr<converter> a = std::make_shared<celciustofahrenheit>(std::make_shared<fahrenheittocelcius>());
	std::cout << a->convert(25.12) << std::endl;


	// ********** TASK 2 *********
	std::deque<Command> commands;

	std::cout << "Enter commands (example: \"MeterToFoot 500\" separated by line break) - Press Ctrl-D to exit" << std::endl;

	for (std::string line; std::getline(std::cin, line);)
	{
		//CTRL-D
		if ((int)line[0] == 4)
			break;

		commands.push_back(Command(line));
	}

	for (auto it = commands.begin(); it != commands.end(); ++it)
		it->exec();

	return 0;


}
