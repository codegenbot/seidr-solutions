Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str.find(" ", i) == string::npos || str.find(" ", i) > str.length() - 1) {
            string word = str.substr(i);
            
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            
            result += word + " ";
            i = str.length();
        } else {
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            
            result += word + " ";
            i = j + 1;
        }
    }
    
    return result;
}

int main() {
    // You can test your code here
    return 0;
}