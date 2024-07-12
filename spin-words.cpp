#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // For std::reverse

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    if (input.empty()) {
        cout << "" << endl;
        return 0;
    }
    
    string word, result;
    
    istringstream iss(input);

    while (iss >> word) {
        if (word.length() >= 5) {
            string reversedWord = word;
            reverse(reversedWord.begin(), reversedWord.end());
            word = reversedWord;
        }
        result += word + " ";
        word = ""; // Reset word
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}