#pragma once

#include <vector>
#include <array>
#include <string>

namespace SimpleCodewordTableConstants {
	const std::array<const std::string, 6> codes{ { "11", "00", "011", "101", "0100", "0101" } };
}

class SimpleCodewordTableContainer
{
private:
	std::vector<std::pair<char, std::string>> codewordTable;

public:
	//Constructor copies histogram to sort it.
	//Unclear if that's the desirable API or not. (Alternative is sorting mutable reference.)
	SimpleCodewordTableContainer(std::vector<std::pair<char, int>> histogram);

	std::string decode(const std::string& inString) const;

private:
	std::string get_char_string(char inChar) const;
};

