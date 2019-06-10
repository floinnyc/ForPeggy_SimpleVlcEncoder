// SimpleVlcEncoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "SimpleHistogramContainer.hpp"
#include "SimpleCodewordTableContainer.hpp"

#include <iostream>

int main()
{
	std::string value("TOBEORNOTTOBEORTOBEORNOT");
	SimpleHistogramContainer histogram(value);
	SimpleCodewordTableContainer codewordTable(histogram.get_histogram());
	std::cout << codewordTable.decode(value) << std::endl;
}
