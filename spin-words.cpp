#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string input, word;
    getline(cin, input);
    
    stringstream ss(input);
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    
    return 0;
}