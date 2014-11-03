#include "converter.hpp"

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"


int main(int argc, char* argv[])
{
  std::string conversion = (argc >= 2) ? argv[1] : " ";
  std::string value = (argc >= 3) ? argv[2] : " ";
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
  
  InValue = converter::ToDouble(value);
    
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



  return 0;
}

//test.exe toEuro 10
