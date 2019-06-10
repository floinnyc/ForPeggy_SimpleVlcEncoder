// SimpleVlcEncoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "SimpleHistogramContainer.hpp"
#include "SimpleCodewordTableContainer.hpp"

#include <iostream>

int main()
{
	SimpleHistogramContainer histogram("TOBEORNOTTOBEORTOBEORNOT");
	SimpleCodewordTableContainer codewordTable(histogram.get_histogram());
}
