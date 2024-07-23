#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        string wholeWord = str.substr(start, end - start);

        // Reverse the whole word
        reverse(wholeWord.begin(), wholeWord.end());

        result += wholeWord + " ";
        
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        cout << spinWords(str) << endl;
    }
}