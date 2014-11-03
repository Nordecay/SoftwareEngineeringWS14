#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"


int main(int argc, char* argv[])
{
  std::string conversion = (argc >= 2) ? argv[1] : " ";
  std::string value = (argc >= 3) ? argv[2] : " ";
 

  //if ( conversion == )
	   //     convert Value     
	  
	  /*
   * TODO
   *
   * use desired conversion here
   *
*/
  
  if (conversion == "toEuro")
  {

	  //Dollar to Euro
	  dollarToEuroConverter* myConverter_ = new dollarToEuroConverter();
	  //double aLotOfDollars = 10000;

	  std::stringstream income_;
	  income_ << value;
	  double aLotOfDollars;
	  income_ >> aLotOfDollars;


	  double aLotOfEuros = myConverter_->convert(aLotOfDollars);
	  std::cout << myConverter_->toString() << " has converted " << aLotOfDollars << " Dollar to " << aLotOfEuros << " Euros!" << std::endl;
  }

   
  if (conversion == "toDollar")
  {
	  //Euro To Dollar Converter
	  EuroTodollarConverter* myConverter = new EuroTodollarConverter();
	  //double aLotofEuro = 10000;

	  std::stringstream income_;
	  income_ << value;
	  double aLotOfEuros;
	  income_ >> aLotOfEuros;

	  double aLotOfDollars = myConverter->convert(aLotOfEuros);
	  //double aLotOfDollars = myConverter->convert(aLotofEuro);
	  std::cout << myConverter->toString() << " has converted " << aLotOfEuros << " Euro to " << aLotOfDollars << " Dollar!" << std::endl;
  }
  
  if (conversion == "toFoot")
  {
	  metertofootconverter* myConverter = new  metertofootconverter();
	  std::stringstream income_;
	  income_ << value;
	  double meter_;
	  income_ >> meter_;

	  double foot_ = myConverter->convert(meter_);
	  std::cout << myConverter->toString() << "has converted " << meter_ << " Meter to " << foot_ << " Foot! " << std::endl;



  }

  if (conversion == "toMeter")
  {
	  foottometerconverter* myConverter = new  foottometerconverter();
	  std::stringstream income_;
	  income_ << value;
	  double foot_;
	  income_ >> foot_;

	  double meter_ = myConverter->convert(foot_);
	  std::cout << myConverter->toString() << "has converted " << foot_ << " Meter to " << meter_ << " Foot! " << std::endl;



  }







  return 0;
}

//test.exe toEuro 10
