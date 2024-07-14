```cpp
#include <string>
#include <iostream>
#include <cstddef>

const char* input; 
std::string validateTweet(const char* input) {
    if (*input == '\0') {
        return "You didn't type anything";
    }
    size_t len = strlen(input);
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has ";
}