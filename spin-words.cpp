#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ) {
        if (input[end] == ' ') {
            output += input.substr(start, end - start) + " ";
            start = end + 1;
        } else if (end == input.size()) {
            output += input.substr(start, end - start) + " ";
            break;
        }
        end++;
    }

    for (size_t i = 0; i < output.size(); ) {
        size_t wordStart = i;
        while (i < output.size() && !isspace(output[i])) {
            i++;
        }
        if (i - wordStart >= 5) {
            std::reverse(output.substr(wordStart, i - wordStart).begin(), output.substr(wordStart, i - wordStart).end());
        }
    }

    return output;
}