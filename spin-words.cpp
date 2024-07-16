```cpp
#include <string>
#include <sstream>

std::string spinWords(std::string input) {
    std::stringstream ss(input);
    std::string word;
    std::stringstream result;

    while (ss >> word) {
        if (word.length() >= 5)
            for (int i = word.length() - 1; i >= 0; --i)
                result << word[i];
        else
            result << word;
        result << " ";
    }

    return result.rdbuf()->sbeam() ? result.sputn(result.gptr(), result.gcount()) : "";
}