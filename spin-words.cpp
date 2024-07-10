#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    stringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            string reversed_word = word;
            reverse(reversed_word.begin(), reversed_word.end());
            result += reversed_word + " ";
        } else {
            result += word + " ";
        }
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}