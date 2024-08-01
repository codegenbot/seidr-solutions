#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if ((i == str.length() || str[i] == ' ') && start < i) {
            string word = str.substr(start, i - start);
            
            if (word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
            
            start = i + 1;
        }
    }
    
    return result;
}

string reverse(string str) {
    string rev = "";
    for(int i=str.length()-1; i>=0; i--)
        rev+=str[i];
    return rev;
}

int main() {
    // Your code here
    return 0;
}