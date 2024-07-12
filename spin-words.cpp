#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // For std::reverse

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    
    istringstream iss(input);

    while (iss >> word) {
        if (word.length() >= 5) {
            for (size_t i = 0; i < word.length() / 2; ++i) {
                char temp = word[i];
                word[i] = word[word.length() - i - 1];
                word[word.length() - i - 1] = temp;
            }
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}