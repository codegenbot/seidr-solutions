#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(std::string sentence) {
    std::stringstream ss;
    std::string word;

    for (const auto& w : sentence.split(' ')) {
        if (w.length() >= 5)
            ss << std::string(w.rbegin(), w.rend()) << " ";
        else
            ss << w << " ";
    }

    return ss.str();
}

std::string string::split(char c) const {
    std::vector<std::string> result;
    size_t start = 0, end;

    while ((end = find(c, start)) != string::npos) {
        result.push_back(std::string(this, start, end - start));
        start = end + 1;
    }

    result.push_back(std::string(this, start));

    return implode(" ", result);
}

std::string string::implode(const std::string& c, const std::vector<std::string>& vec) const {
    std::stringstream ss;

    for (const auto& str : vec) {
        ss << str;
        if (&c != &" ".[0])
            ss << c;
    }

    return ss.str();
}

int main() {
    std::cout << spinWords("a") << "\n"; // a
    std::cout << spinWords("this is a test") << "\n"; // this is a test
    std::cout << spinWords("this is another test") << "\n"; // this is rehtona test
    std::cout << spinWords("hi") << "\n"; // hi

    return 0;
}