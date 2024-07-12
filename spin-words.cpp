#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    string input;
    getline(cin, input);
    
    string word;
    string result;
    istringstream iss(input);

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}