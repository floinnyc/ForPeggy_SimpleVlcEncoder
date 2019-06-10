#pragma once

#include <vector>
#include <string>

//WARNING: No logic was considered for unicode.
class SimpleHistogramContainer
{
private:
	//A map would be simpler and quicker for large amounts of chars... but:
	// 1) There shouldn't be enough chars for map to beat (release build) vector performance, let alone meaningfully AND
	// 2) Part of this is to show how std::vector can be used.
	std::vector<std::pair<char, int>> histogram;

public:
	//Just reading inString, so pass by reference for performance and prevent screw-ups with const.
	//WARNING: No logic was considered for unicode.
	SimpleHistogramContainer(const std::string& inString);

	const std::vector<std::pair<char, int>>& get_histogram() const;
private:
	void add_or_increment_char(char inChar);
};

