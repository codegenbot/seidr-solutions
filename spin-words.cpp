#include <iostream>
#include <sstream>

using namespace std;

string reverseWords(string input) {
    string result = "";
    stringstream ss(input);
    string word;
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // remove the trailing space
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    string output = reverseWords(input);
    cout << output << endl;
    
    return 0;
}