#include <string>
bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}