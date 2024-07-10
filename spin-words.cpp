#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string result = "";
    
    istringstream iss(input);
    string word;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    std::cout << result;
    
    return 0;
}