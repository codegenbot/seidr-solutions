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
            for (char &c : word) {
                c = word[word.length() - 1 - (&c - &word[0])];
            }
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}