#include "SimpleHistogramContainer.hpp"

//WARNING: No logic was considered for unicode.
SimpleHistogramContainer::SimpleHistogramContainer(const std::string& inString)
{
	std::string::const_iterator itr;

	for (itr = inString.begin(); itr < inString.end(); itr++)
	{
		add_or_increment_char(*itr);
	}
}

const std::vector<std::pair<char, int>>& SimpleHistogramContainer::get_histogram() const
{
	return histogram;
}

void SimpleHistogramContainer::add_or_increment_char(char inChar)
{
	std::vector<std::pair<char, int>>::iterator itr;

	bool isFound = false;
	for (itr = histogram.begin(); itr < histogram.end(); itr++)
	{
		if (itr->first == inChar) {
			itr->second += 1;
			isFound = true;
			break;
		}
	}

	if (isFound == false)
	{
		histogram.push_back(std::pair<char, int>(inChar, 1));
	}
}
