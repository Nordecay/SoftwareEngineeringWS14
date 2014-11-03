#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <sstream>

class converter
{
  public:
    converter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CONVERTER_H
