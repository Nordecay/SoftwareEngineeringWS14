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

#define DOUBLETOLLERANCE 0.001

#define TINYTEST_EQUAL_DOUBLE(expected, actual)						\
if (!(expected <= (actual + DOUBLETOLLERANCE) && expected >= (actual - DOUBLETOLLERANCE)))	\
{																							\
	printf("%s:%d expected %s, actual: %s\n", __FILE__, __LINE__, #expected, #actual);		\
	return 0;																				\
}


int DollarToEuroTest()
{
	dollarToEuroConverter* myConverter_ = new dollarToEuroConverter();
	double aLotOfEuros = myConverter_->convert(500);
	TINYTEST_EQUAL_DOUBLE(391.12, aLotOfEuros);
	
	return 1;
}

int EuroToDollarTest()
{
	EuroTodollarConverter* myConverter = new EuroTodollarConverter();
	double aLotOfDollars = myConverter->convert(600);
	TINYTEST_EQUAL_DOUBLE(767.028,aLotOfDollars);
	return 1;
}

int MetertToFoot()
{
	//Meter to Foot
	metertofootconverter* myConverter = new  metertofootconverter();
	double foot_ = myConverter->convert(10);
	TINYTEST_EQUAL_DOUBLE(32.808, foot_)
	return 1;
}
int FootToMeter()
{
	//Foot to Meter
	foottometerconverter* myConverter = new  foottometerconverter();

	double meter_ = myConverter->convert(500);
	TINYTEST_EQUAL_DOUBLE(152.402, meter_)
		return 1;
}

// TemperaturConverter
int CelciusToFahrenheit()
{
	//Celcius to Fahrenheit
	celciustofahrenheit* myConverter = new  celciustofahrenheit();
	double fahrenheit_ = myConverter->convert(30);
	TINYTEST_EQUAL_DOUBLE(86, fahrenheit_);
	return 1;
}

int FahrenheitToCelcius()
{
	// Fahrenheit to Celcius 
	fahrenheittocelcius* myConverter = new  fahrenheittocelcius();
	double celcius_ = myConverter->convert(100);
	TINYTEST_EQUAL_DOUBLE(37.7778, celcius_);
	return 1;
}
//WeightConverter
// Ounces to Gramm
int OuncesToGramm()
{
	ouncestogrammconverter* myConverter = new ouncestogrammconverter();
	double gramm_ = myConverter->convert(100);
	TINYTEST_EQUAL_DOUBLE(2834.95, gramm_);
	return 1;
}
//Gramm to Ounces
int GrammtoOunces()
{
	grammtoouncesconverter* myConverter = new grammtoouncesconverter();
	double ounces_ = myConverter->convert(100);
	TINYTEST_EQUAL_DOUBLE(3.5274, ounces_);
	return 1;
}





/*  Einkommentieren für Test*/
TINYTEST_START_SUITE(MainTest);

TINYTEST_ADD_TEST(DollarToEuroTest);
TINYTEST_ADD_TEST(EuroToDollarTest);
TINYTEST_ADD_TEST(MetertToFoot);
TINYTEST_ADD_TEST(FootToMeter);
TINYTEST_ADD_TEST(CelciusToFahrenheit);
TINYTEST_ADD_TEST(FahrenheitToCelcius);
TINYTEST_ADD_TEST(OuncesToGramm);
TINYTEST_ADD_TEST(GrammtoOunces);



TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(MainTest);
