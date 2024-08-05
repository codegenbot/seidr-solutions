#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        output += word + " ";
    }
    return output.substr(0, output.size() - 1); // remove trailing space
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        std::string input;
        getline(cin, input);
        cout << spinWords(input) << endl;
    }

    return 0;
}