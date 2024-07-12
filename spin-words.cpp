#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string word, result;
    
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    std::cout << result << std::endl;
    
    return 0;
}