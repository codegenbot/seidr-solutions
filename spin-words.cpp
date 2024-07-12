#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word;
    stringstream ss(input);
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        std::cout << word << " ";
    }
    
    return 0;
}