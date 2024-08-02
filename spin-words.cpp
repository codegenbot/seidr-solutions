#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    string word;
    string result = "";
    istringstream iss(input);
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back(); // remove the extra space at the end
    }

    std::cout << result;

    return 0;
}