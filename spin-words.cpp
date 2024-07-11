#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    istringstream iss(input);
    
    while(iss >> word) {
        if(word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    
    std::cout << result << std::endl;
    
    return 0;
}