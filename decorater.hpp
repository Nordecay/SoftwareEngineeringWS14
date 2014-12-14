#ifndef DECORATOR_PATTERN_HPP
#define DECORATOR_PATTERN_HPP

#include <vector>
#include <memory>

#include "converter.hpp"

class Decorator_Pattern : public converter
{
public:
	Decorator_Pattern() : decorater{ nullptr }{};
	Decorator_Pattern(std::shared_ptr<converter> decorator_) : decorater{ decorator_ }{}
protected:
	std::shared_ptr<converter> decorater;
};

#endif //DECORATOR_PATTERN_HPP