#include "converter.hpp"

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"
#include "ouncestogrammconverter.hpp"
#include "grammtoouncesconverter.hpp"
#include "tinytest.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = (argc >= 2) ? argv[1] : "";
  std::string value = (argc >= 3) ? argv[2] : "";
  double InValue = 0;
 
  //Var Test
  //std::cout << " V 1 " << conversion << std::endl;
  //std::cout << " V 2 " << value << std::endl;
  
    
  /*
   * TODO
   *
   * use desired conversion here
   *
  */
  if (value != "")
  {
	  InValue = converter::ToDouble(value);
  }
  else
  {
	  InValue = 0;
  }
  
//MoneyConverter    
  if (conversion == "toEuro" || conversion == "ToEuro")
  {
	  //Dollar to Euro
	  dollarToEuroConverter* myConverter_ = new dollarToEuroConverter();
	 
	  double aLotOfEuros = myConverter_->convert(InValue);
	  std::cout << myConverter_->toString() << " has converted " << InValue << " Dollar to " << aLotOfEuros << " Euros!" << std::endl;
  }

  if (conversion == "toDollar" || conversion == "ToDollar")
  {
	  //Euro To Dollar Converter
	  EuroTodollarConverter* myConverter = new EuroTodollarConverter();
	 
	  double aLotOfDollars = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << " has converted " << InValue << " Euro to " << aLotOfDollars << " Dollar!" << std::endl;
  }
//LengthConverter 
  if (conversion == "toFoot" || conversion =="ToFoot" )
  {
	  //Meter to Foot
	  metertofootconverter* myConverter = new  metertofootconverter();
	  
	  double foot_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Meter to " << foot_ << " Foot! " << std::endl;
  }

  if (conversion == "toMeter" || conversion == "ToMeter")
  {
	//Foot to Meter
	  foottometerconverter* myConverter = new  foottometerconverter();

	  double meter_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Meter to " << meter_ << " Foot! " << std::endl;
  }
// TemperaturConverter
  if (conversion == "toFahrenheit" || conversion == "ToFahrenheit")
  {
	  //Celcius to Fahrenheit
	  celciustofahrenheit* myConverter = new  celciustofahrenheit();

	  double fahrenheit_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Celcius to " << fahrenheit_ << " Fahrenheit! " << std::endl;
  }

  if (conversion == "toCelcius" || conversion == "ToCelcius")
  {
	  // Fahrenheit to Celcius 
	  fahrenheittocelcius* myConverter = new  fahrenheittocelcius();

	  double celcius_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Celcius to " << celcius_ << " Fahrenheit! " << std::endl;
  }
//WeightConverter

  if (conversion == "toGramm" || conversion == "ToGramm")
  {
	  ouncestogrammconverter* myConverter = new ouncestogrammconverter();

	  double gramm_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Ounces to " << gramm_ << " Gramm! " << std::endl;
  }

  if (conversion == "toOunces" || conversion == "ToOunces")
  {
	  grammtoouncesconverter* myConverter = new grammtoouncesconverter();

	  double ounces_ = myConverter->convert(InValue);
	  std::cout << myConverter->toString() << "has converted " << InValue << " Gramm to " << ounces_ << " Ounces! " << std::endl;
  }
  return 0;
}

